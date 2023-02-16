#include "nhapxuat.h"
#include "xuly.h"

constexpr int MAXN = static_cast<int>(1E3 + 10);

int main(void) {
	int N;
	int a[MAXN];
	nhap_mang(a, N);
	xuat_ket_qua(a, N);
	return 0;
}