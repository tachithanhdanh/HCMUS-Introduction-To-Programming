#include "Process.h"
#include "Constants.h"
#include "IOFunctions.h"
#include <cstring>
#include <cctype>

void file_process(int K, std::FILE *fi, std::FILE *fo, int mode) {
	fseek(fi, 0, SEEK_SET);
	char ch;
	if (mode) K *= -1;
	while ((ch = std::fgetc(fi)) != EOF) {
		if (fo == nullptr) std::fputc(ch, stdout);
		else {
			if (std::isalpha(ch)) {
				ch = ((((std::tolower(ch) - 'a') + K) + 26 * 2) % 26) + (std::islower(ch) ? 'a' : 'A');
			}
			std::fputc(ch, fo);
		}
	}
	if (fo == nullptr) std::fputc('\n', stdout);
	return;
}

void process(int mode, const int &K) {
	char fileIn[200] = {}, fileOut[200] = {};
	std::FILE *fi, *fo;
	fi = getFiletoRead(fileIn, mode);
	fo = getFiletoWrite(fileOut, mode);
	file_process(K, fi, fo, mode);
	putData(fi, fileIn, K);
	fclose(fi);
	fclose(fo);
	std::printf("\Da %s du lieu tu file %s vao file %s.\n", mode_name[1 - mode], fileIn, fileOut);
	fo = std::fopen(fileOut, "r");
	putData(fo, fileOut, K);
	fclose(fo);
	return;
}