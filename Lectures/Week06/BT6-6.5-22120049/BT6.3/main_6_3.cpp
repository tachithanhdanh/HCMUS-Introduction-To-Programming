#include "nhap_6_3.h"
#include "xuly1_6_3.h"
#include "xuly2_6_3.h"
#include "xuat_6_3.h"
#include "main_6_3.h"

void bai_6_3(void) {
	double a, b, c;
	nhap(a, b, c);
	sort(a, b, c);
	xuat_ket_qua(a, b, c);
	return;
}