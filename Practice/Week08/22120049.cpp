#include <stdio.h>
#include <math.h>

struct PHANSO {
	int tu_so;
	int mau_so;
};

struct DIEM {
	double x, y;
};

struct TAMGIAC {
	DIEM dinh[3];
	double do_dai_canh[3];
};

void bai_5_1();
void nhap_phan_so(PHANSO &ps, int thu_tu);
void xuat_phan_so(const PHANSO &ps);
PHANSO cong_hai_phan_so(const PHANSO &ps1, const PHANSO &ps2);
PHANSO tru_hai_phan_so(const PHANSO &ps1, const PHANSO &ps2);
PHANSO nhan_hai_phan_so(const PHANSO &ps1, const PHANSO &ps2);
PHANSO chia_hai_phan_so(const PHANSO &ps1, const PHANSO &ps2);
void rut_gon_phan_so(PHANSO &ps);
int tim_UCLN(int a, int b);
void bai_5_2();
void nhap_tam_giac(TAMGIAC &tamgiac);
void nhap_diem(DIEM &diem);
double dien_tich_tam_giac(const TAMGIAC &tamgiac);
double chu_vi_tam_giac(const TAMGIAC &tamgiac);
double tinh_khoang_cach(const DIEM &A, const DIEM &B);
double square(double a);

void bai_5_1() {
	PHANSO ps1, ps2;
	printf("Bai 5.1:\n");
	nhap_phan_so(ps1, 1);
	nhap_phan_so(ps2, 2);
	printf("5.1.1. Tong hai phan so: ");
	xuat_phan_so(cong_hai_phan_so(ps1, ps2));
	printf("5.1.2. Hieu hai phan so: ");
	xuat_phan_so(tru_hai_phan_so(ps1, ps2));
	printf("5.1.3. Tich hai phan so: ");
	xuat_phan_so(nhan_hai_phan_so(ps1, ps2));
	printf("5.1.4. Chia hai phan so: ");
	xuat_phan_so(chia_hai_phan_so(ps1, ps2));
	puts("5.1.5. Rut gon phan so:");
	printf("Phan so 1 sau khi duoc rut gon: ");
	rut_gon_phan_so(ps1);
	xuat_phan_so(ps1);
	printf("Phan so 2 sau khi duoc rut gon: ");
	rut_gon_phan_so(ps2);
	xuat_phan_so(ps2);
	return;
}

void nhap_phan_so(PHANSO &ps, int thu_tu) {
	printf("Nhap phan so thu %d.\n", thu_tu);
	printf("Nhap tu so = ");
	scanf("%d", &ps.tu_so);
	printf("Nhap mau so = ");
	scanf("%d", &ps.mau_so);
	return;
}

void xuat_phan_so(const PHANSO &ps) {
	printf("%d/%d\n", ps.tu_so, ps.mau_so);
	return;
}

PHANSO cong_hai_phan_so(const PHANSO &ps1, const PHANSO &ps2) {
	PHANSO ket_qua;
	ket_qua.tu_so = ps1.tu_so * ps2.mau_so + ps1.mau_so * ps2.tu_so;
	ket_qua.mau_so = ps1.mau_so * ps2.mau_so;
	rut_gon_phan_so(ket_qua);
	return ket_qua;
}
PHANSO tru_hai_phan_so(const PHANSO &ps1, const PHANSO &ps2) {
	PHANSO doi_cua_ps2 = {-ps2.tu_so, ps2.mau_so};
	return cong_hai_phan_so(ps1, doi_cua_ps2);
}

PHANSO nhan_hai_phan_so(const PHANSO &ps1, const PHANSO &ps2) {
	PHANSO tich = {
		ps1.tu_so * ps2.tu_so,
		ps1.mau_so * ps2.mau_so
	};
	rut_gon_phan_so(tich);
	return tich;
}

PHANSO chia_hai_phan_so(const PHANSO &ps1, const PHANSO &ps2) {
	PHANSO nghich_dao_ps2 = {ps2.mau_so, ps2.tu_so};
	return nhan_hai_phan_so(ps1, nghich_dao_ps2);
}

void rut_gon_phan_so(PHANSO &ps) {
	if (ps.tu_so * ps.mau_so < 0) {
		ps.tu_so = -abs(ps.tu_so);
	} else {
		ps.tu_so = abs(ps.tu_so);
	}
	ps.mau_so = abs(ps.mau_so);
	int UCLN = tim_UCLN(abs(ps.tu_so), ps.mau_so);
	ps.tu_so /= UCLN, ps.mau_so /= UCLN;
	return;
}
int tim_UCLN(int a, int b) {
	while (b) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void bai_5_2() {
	printf("Bai 5.2:\n");
	TAMGIAC tamgiac;
	nhap_tam_giac(tamgiac);
	printf("5.2.1. Dien tich tam giac: %lf\n", dien_tich_tam_giac(tamgiac));
	printf("5.2.2. Chu vi tam giac: %lf\n", chu_vi_tam_giac(tamgiac));
	return;
}

void nhap_tam_giac(TAMGIAC &tamgiac) {
	printf("Nhap tam giac:\n");
	for (int i = 1; i <= 3; ++i) {
		printf("Nhap toa do dinh thu %d.\n", i);
		nhap_diem(tamgiac.dinh[i - 1]);
	}
	for (int i = 0; i < 3; ++i) {
		tamgiac.do_dai_canh[i] = tinh_khoang_cach(tamgiac.dinh[i / 2], tamgiac.dinh[i + 1 - i / 2]);
	}
	return;
}
void nhap_diem(DIEM &diem) {
	printf("Nhap x = ");
	scanf("%lf", &diem.x);
	printf("Nhap y = ");
	scanf("%lf", &diem.y);
	return;
}

double dien_tich_tam_giac(const TAMGIAC &tamgiac) {
	double p = chu_vi_tam_giac(tamgiac) / 2;
	double dien_tich = p;
	for (int i = 0; i < 3; ++i) {
		dien_tich *= p - tamgiac.do_dai_canh[i];
	}
	dien_tich = sqrt(dien_tich);
	return dien_tich;
}

double chu_vi_tam_giac(const TAMGIAC &tamgiac) {
	double chu_vi = tamgiac.do_dai_canh[0] + tamgiac.do_dai_canh[1] + tamgiac.do_dai_canh[2];
	return chu_vi;
}

double tinh_khoang_cach(const DIEM &A, const DIEM &B) {
	double khoang_cach = sqrt(square(A.x - B.x) + square(A.y - B.y));
	return khoang_cach;
}

double square(double a) {
	return a * a;
}

int main(void) {
	bai_5_1();
	bai_5_2();
	return 0;
}