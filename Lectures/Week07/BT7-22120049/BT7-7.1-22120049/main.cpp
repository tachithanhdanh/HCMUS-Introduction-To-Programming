#include "nhapxuat.h"
#include "xuly.h"

constexpr int MAXN = static_cast<int>(1E3 + 10);

int main(void) {
	int N;
	int a[MAXN];
	nhap_mang(a, N);
	sang_nguyen_to();
	int so_so_am{}, so_so_nguyen_to{};
	dem(a, N, so_so_am, so_so_nguyen_to);
	xuat_ket_qua(so_so_am, so_so_nguyen_to);
}