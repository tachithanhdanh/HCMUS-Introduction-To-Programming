#include "nhap_6_3.h"
#include "xuly1_6_3.h"

void nhap(double& a, double& b, double& c) {
	bool nhap_sai;
	do {
		std::printf("Nhap a, b, c = ");
		std::scanf("%lf%lf%lf", &a, &b, &c);
		nhap_sai = kiem_tra_nhap_sai(a, b, c);
		if (nhap_sai) std::puts("Ban da nhap sai, vui long nhap lai.");
	} while (nhap_sai);
	return;
}