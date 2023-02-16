#include "nhap_6_2.h"
#include "xuly1_6_2.h"
#include "xuat_6_2.h"
#include "main_6_2.h"

void bai_6_2(void) {
	int a, b, c, d;
	nhap_phan_so(1, a, b);
	nhap_phan_so(2, c, d);
	char phep_tinh;
	nhap_phep_tinh(phep_tinh);
	// e va f la hai bien luu tru ket qua
	int e, f;
	bool chia_cho_0 = false;
	tinh_toan(a, b, c, d, e, f, phep_tinh, chia_cho_0);
	xuat_ket_qua(e, f, chia_cho_0);
	return;
}