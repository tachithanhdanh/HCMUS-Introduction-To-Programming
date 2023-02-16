#include "hangso.h"
#include "nhapxuat.h"
#include "xuly.h"

int main(void) {
	char s[N]{};
	nhap_chuoi(s);
	xuly(s);
	xuat_ket_qua();
	return 0;
}