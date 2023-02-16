#include "xuly.h"

// tra ve chuoi s sau khi duoc chuan hoa
void normalize(char *s) {
	int len = static_cast<int>(std::strlen(s));
	trim_left(s, len);
	trim_right(s, len);
	clear_mid_spaces(s, len);
	return;
}

// xoa cac ky tu chua dau cach ben trai chuoi
void trim_left(char *s, int &len) {
	char *p = s;
	// duyet cho den khi gap ky tu khac ky tu khoang trang dau tien
	while (std::isspace(*p)) {
		++p;
	}
	// tim khoang cach
	int dif = p - s;
	char *q = s;
	// day cac ky tu o cuoi len dau
	for (; p != s + len; ++p, ++q) {
		*q = *p;
	}
	// update the length
	len -= dif;
	// null terminated string with new length
	*(s + len) = '\0';
	return;
}

// xoa cac ky tu khoang trang ben phai chuoi
void trim_right(char *s, int &len) {
	// p la con tro nam o vi tri cuoi
	char *p = s + len - 1;
	// duyet p nguoc ve truoc cho den khi gap ky tu khong phai khoang trang
	while (std::isspace(*p)) {
		--p;
	}
	// cap nhat do dai 
	len -= len - (p - s + 1);
	// gan ky tu sau ky tu cuoi la '\0' de bao hieu ket thuc chuoi
	*(p + 1) = '\0';
	return;
}

// xoa ky tu khoang trang du o giua xau
void clear_mid_spaces(char *s, int &len) {
	// dem cac ky tu khoang trang thua can xoa giua cac tu
	int count_spaces = 0;
	// kiem tra xem day co phai la ky tu khoang trang dau tien hay khong
	bool first_space = true;
	for (char *p = s, *q = s; p < s + len; ++p) {
		// neu gap phai ky tu khoang trang
		if (isspace(*p)) {
			// kiem tra xem do co phai la khoang trang dau tien hay khong
			if (first_space) {
				// giu lai mot khoang trang (gan *p la khoang trang vi *p co the la '\t' hoac '\v')
				*p = ' ';
				first_space = false;
				count_spaces = 0;
				// neu co thi luu vi tri cua con tro q la lien sau p de lam moc
				q = (p + 1);
			} else {
				++count_spaces;
			}
		} else if (!first_space) {
			first_space = true;
			// day cac ky tu tu vi tri p len vi tri q (tuc la xoa cac khoang trang o giua p va q)
			for (char *r = p; r < s + len; ++r, ++q) {
				*q = *r;
			}
			// cap nhat do dai xau va vi tri cua con tro p
			// dua con tro p ve vi tri sau dau cach dau tien
			len -= count_spaces, p -= count_spaces;
		}
	}
	*(s + len) = '\0';
	return;
}