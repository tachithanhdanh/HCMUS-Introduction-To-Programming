#include "hangso.h"
#include "nhap.h"
#include "xuat.h"

int main(void) {
	char s[N] = {};
	char c;
	nhap_chuoi(s);
	nhap_ky_tu(c);
	xuat_ket_qua(s, c);
	return 0;
}