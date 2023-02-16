#include "kt_nhapxuat.h"
#include "kt_phanso.h"
#include "kt_xuly.h"
#include "kt_hangso.h"

int main(void) {
	char phanso[N] = {};
	scanf("%s", phanso);
	char ket_qua[N] = {};
	xu_ly(phanso, ket_qua);
	xuat_ket_qua(ket_qua);
	return 0;
}