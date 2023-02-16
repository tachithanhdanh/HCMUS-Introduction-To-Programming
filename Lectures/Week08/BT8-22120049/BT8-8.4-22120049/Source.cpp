#include "nhapxuat.h"
#include "xuly.h"

constexpr int N = 1005;

int main(void) {
	char s[N]{};
	nhap_chuoi(s);
	normalize(s);
	xuat_ket_qua(s);
	return 0;
}

/*
Test mau: 
                hom             nay        troi        dep        qua                   
   test    mau   ne    ban   oi   
			blob blob						 oaoaoa  sadasd						
*/