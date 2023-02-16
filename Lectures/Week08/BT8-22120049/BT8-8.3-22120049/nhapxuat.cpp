#include "nhapxuat.h"

void nhap_chuoi(char *s) {
	std::printf("Nhap chuoi = ");
	std::scanf("%[^\n]s", s);
	return;
}

/* https://www.learncpp.com/cpp-tutorial/external-linkage-and-variable-forward-declarations/ */ 
extern int size[N];
extern int pos[N][MAXCHAR];

void xuat_ket_qua() {
	for (int i = N - 1; i > 0; --i) {
		if (size[i]) {
			std::printf("%d: ", i);
			for (int j = 0; j < size[i]; ++j) {
				std::putchar(pos[i][j]);
				std::putchar(' ');
			}
			std::putchar('\n');
		}
	}
}