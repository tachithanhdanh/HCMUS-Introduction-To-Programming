#include "IOFunctions.h"
#include "Constants.h"
#include "Process.h"
#include <cstring>

int getKey() {
	std::printf("Nhap so nguyen K de lam khoa: ");
	int K;
	std::scanf("%d", &K);
	return K;
}

FILE *getFiletoRead(char *fileIn, int mode) {
	std::FILE *fi;
	do {
		std::printf("Nhap ten file ban muon %s (neu muon dung file co san thi nhap macdinh): ", mode_name[mode]);
		std::scanf(" %[^\n]s", fileIn);
		if (std::strcmp(fileIn, "macdinh") == 0) {
			std::strcpy(fileIn, default_file_name[mode]);
		}
		fi = std::fopen(fileIn, "r");
		if (fi == nullptr) {
			std::printf("File ban nhap vao khong ton tai, vui long nhap lai!\n");
		}
	} while (fi == nullptr);
	return fi;
}

FILE *getFiletoWrite(char *fileOut, int mode) {
	std::printf("Nhap ten file %s de luu ket qua sau khi da %s tu file %s (neu muon dung file co san thi nhap macdinh):\n"
		, file_type[mode], mode_name[mode], file_type[1 - mode]);
	std::scanf(" %[^\n]s", fileOut);
	if (std::strcmp(fileOut, "macdinh") == 0) {
		std::strcpy(fileOut, default_file_name[mode + 1]);
	}
	return std::fopen(fileOut, "w");
}

void putData(FILE *fp, const char* filename, const int& K) {
	std::printf("Noi dung chua trong file %s:\n", filename);
	file_process(K, fp);
	return;
}