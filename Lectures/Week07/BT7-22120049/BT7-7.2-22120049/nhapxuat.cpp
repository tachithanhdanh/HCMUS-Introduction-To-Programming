#include "nhapxuat.h"
#include "xuly.h"

void nhap_mang(int a[], int& N) {
	std::printf("Nhap N = ");
	std::scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		std::printf("Phan tu %d = ", i);
		std::scanf("%d", &a[i]);
	}
	return;
}

void xuat_ket_qua(int a[], int N) {
	std::printf("Mang%s tang dan.\n", (is_sorted(a, N) ? "" : " khong"));
	std::printf("Mang%s doi xung.\n", (is_palindrome(a, N) ? "" : " khong"));
	std::printf("Mang%s lap thanh cap so cong.\n", (check_arithmetic_sequence(a, N) ? "" : " khong"));
	return;
}