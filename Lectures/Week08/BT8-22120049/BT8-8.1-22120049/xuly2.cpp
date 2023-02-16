#include "xuly2.h"
//#include <cstdio>

// int strlen(const char *s): tra ve do dai cua chuoi s.
std::size_t strlen(const char *s) {
	// tao con tro phu luu vi tri dau chuoi
	const char *p = s;
	// duyet cho den khi gap ky tu '\0' dau tien
	while (*s) {
		++s;
	}
	// do dai cua chuoi bang khoang cach cua 2 con tro.
	return s - p;
}

// char *strcat(char *s1, const char *s2): noi chuoi s2 vao cuoi chuoi s1.
// ham nay gia dinh s1 du do dai noi s2.
char *strcat(char *s1, const char *s2) {
	char *p = s1;
	// dich chuyen con tro p cho den khi gap ky tu '\0' dau tien.
	while (*p) 
		++p;

	// noi s2 vao cuoi chuoi s1.
	while (*p++ = *s2++);
	return s1;
}

// int strcmp(const char *s1, const char *s2): so sanh 2 chuoi s1 va s2
int strcmp(const char *s1, const char *s2) {
	while (*s1 && (*s1 == *s2)) {
		++s1, ++s2;
	}
	//return int((unsigned char)(*s1)) - int((unsigned char)(*s2));
	if (*s1 == *s2) return 0;
	if (*s1 < *s2) return -1;
	return 1;
}

// double atof(const char *s): tra ve so thuc tu xau s cho truoc.
double atof(const char *s) {
	// sign = true if
	int sign = set_sign(s);
	double res = 0.0;
	char c;
	s = update1(&c, s, &res);
	
	int e = 0;
	if (c == '.') {
		s = update1(&c, s, &res, &e);
	}

	if (c == 'e' || c == 'E') {
		int exp_sign = (isdigit(*s) ? 1 : set_sign(s));
		if (!isdigit(*s)) ++s;
		int i = 0;
		c = *s++;
		//std::printf("%c\n", c);
		while (isdigit(c)) {
			i = i * 10 + static_cast<int>(c - '0');
			c = *s++;
			//std::printf("%c\n", c);
		}
		e += i * exp_sign;
	}
	//std::printf("%d\n", e);
	update2(res, e);
	return res;
}
/*
cases to handle:
12345
12345.
12345.0
12345.123
12345.123.456 -> output: 12345.123
1.2345
12e5 -> 1200000
12.345e3 -> 12345.0
123EE333 -> 123.0
123E3E -> 123000.0
*/
