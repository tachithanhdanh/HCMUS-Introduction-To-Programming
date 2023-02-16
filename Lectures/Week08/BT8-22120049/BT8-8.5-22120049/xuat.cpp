#include "xuat.h"

void xuat_ket_qua(char s[], char c) {
	int len = static_cast<int>(std::strlen(s));
	// them ky tu c vao cuoi chuoi de co the in ra chuoi con cuoi cung trong chuoi s.
	s[len++] = c;
	char res[N];
	std::memset(res, '\0', sizeof(char) * N);
	int size = 0;
	for (int i = 0; i < len; ++i) {
		if (s[i] != c) {
			res[size++] = s[i];
		} else {
			res[size] = '\0';
			if (size) {
				std::printf("\"%s\"\n", res);
				size = 0;
			}
		}
	}
	return;
}

/*
test 1:
s = for (int i = 0; i < len; ++i) {if (s[i] != c) { res[size++] = s[i]; } else { res[size] = '\0'; if (size) { std::printf("\"%s\"\n", res); size = 0; } } }
c = ; hoac { hoac }

test 2:
s = Only #include what you need (don’t include everything just because you can).
c = u, e, o, a, i
*/