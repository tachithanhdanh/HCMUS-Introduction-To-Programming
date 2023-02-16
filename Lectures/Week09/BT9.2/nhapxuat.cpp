#include "nhapxuat.h"

void nhapDanhsachHocsinh(Hocsinh hs[], int &N) {
	std::printf("Nhap so hoc sinh N = ");
	std::scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		nhapHocsinh(hs[i], i + 1);
	}
	return;
}

void nhapHocsinh(Hocsinh &hs, int thu_tu) {
	std::printf("Nhap thong tin cua hoc sinh thu %d.\n", thu_tu);
	std::printf("Nhap ho ten: ");
	std::scanf(" %49[^\n]s", hs.hoten);
	std::printf("Nhap ngay sinh (dinh dang dd/mm/yyyy): ");
	std::scanf("%10s", hs.ngaysinh);
	std::printf("Nhap gioi tinh (1 la nam, 0 la nu): ");
	std::scanf("%d", &hs.gioitinh);
	std::printf("Nhap diem toan: ");
	std::scanf("%f", &hs.diemtoan);
	std::printf("Nhap diem van: ");
	std::scanf("%f", &hs.diemvan);
	return;
}

void xuatDanhsach(Hocsinh hs[], int N, bool (*checkEligible)(const Hocsinh &)) {
	std::puts("Danh sach hoc sinh gioi theo thu tu diem trung binh giam dan.");
	for (int i = 0; i < N; ++i) {
		if (checkEligible(hs[i])) {
			std::printf("%d. %s (diem toan: %.2f, diem van: %.2f, diem trung binh: %.2f)\n"
				, i + 1, hs[i].hoten, hs[i].diemtoan, hs[i].diemvan, hs[i].diemtrungbinh);
		} else {
			break;
		}
	}
	return;
}

bool kiemtra(const Hocsinh &hs) {
	return hs.diemtrungbinh >= 8.0F;
}