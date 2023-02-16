#include "hangso.h"
#include "nhapxuat.h"
#include "xuly.h"

int main(void) {
	char S[N];
	nhap(S, 0);
	char T[N];
	nhap(T, 1);
	kiem_duyet(S, T);
	xuat_ket_qua(S);
	return 0;
}

/*
Test mau:

1.
S: Trong truong hop doan van nay bi kiem duyet boi nha nuoc cong hoa xa hoi chu nghia Viet Nam, toi xin khang dinh toi khong lien quan den cac nhom tren.
T: a, e, i hoac o

S: Nganh IT o Viet Nam hien nay co the noi la dung dau su phat trien. Co the noi IT la vua cua cac nganh nghe. Thang em minh hoc bach khoa co khi, sinh nam 96 nay re ngang IT. Gai gu nghe no bao lam IT thi chay nuoc.
T: IT

S: Hello cac ban! Hello moi nguoi! Hello World!
T: Hello

S: Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse scelerisque purus tortor, ut scelerisque urna euismod vitae. Suspendisse potenti.
T: ipsum

*/