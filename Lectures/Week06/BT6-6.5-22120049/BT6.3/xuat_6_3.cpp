#include "xuat_6_3.h"
#include "xuly2_6_3.h"

void xuat_ket_qua(double a, double b, double c) {
	bool vuong, can, deu;
	if (lap_thanh_tam_giac(a, b, c)) {
		std::puts("Lap thanh tam giac.");
		kiem_tra_loai_tam_giac(vuong, can, deu, a, b, c);
		cho_biet_loai_tam_giac(vuong, can, deu);
	} else {
		std::puts("Khong lap thanh tam giac!");
	}
}

void cho_biet_loai_tam_giac(bool& vuong, bool& can, bool& deu) {
	std::printf("Loai tam giac la");
	if (deu) {
		std::printf(" deu");
	} else if (vuong || can) {
		if (vuong) {
			std::printf(" vuong");
		}
		if (can) {
			std::printf(" can");
		}
	} else {
		std::printf(" thuong");
	}
	std::puts(".");
	return;
}