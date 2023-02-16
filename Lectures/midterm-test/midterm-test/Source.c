#include <stdio.h>

int findSpan(const char s1[], int start, const char s2[]);
int mystrlen(const char s[]);
int countSpan(const char s1[], int start, const char s2[]);

int main(void) {
	puts("Bai1");
	printf("%d\n", findSpan("the@quick#fox", 0, "@#"));
	printf("%d\n", findSpan("the@quick#fox", 5, "@#"));
	printf("%d\n", findSpan("the@quick#fox", 0, "!&"));
	printf("%d\n", mystrlen("the@quick#fox"));
	putchar('\n');
	puts("Bai2");
	printf("%d\n", countSpan("the!@quick#&&fox", 3, "@#!&"));
	printf("%d\n", countSpan("the!@quick#&&fox", 6, "@#!&"));
	printf("%d\n", countSpan("the!@quick#&&fox", 12, "@#!&"));
	//printf("%d\n");
	return 0;
}

int mystrlen(const char s[]) {
	int size = 0;
	while (s[size] != '\0') {
		++size;
	}
	return size;
}

int findSpan(const char s1[], int start, const char s2[]) {
	if (start < 0) start = 0;
	int len1 = mystrlen(s1);
	int len2 = mystrlen(s2);
	if (start >= len1) return len1;
	for (int i = start; i < len1; ++i) {
		for (int j = 0; j < len2; ++j) {
			if (s1[i] == s2[j]) {
				return i;
			}
		}
	}
	return len1;
}

int countSpan(const char s1[], int start, const char s2[]) {
	int len1 = mystrlen(s1);
	int len2 = mystrlen(s2);
	if (start < 0) start = 0;
	if (start >= len1) return 0;
	int res = 0;
	for (int i = start; i < len1; ++i) {
		int not_found = 1; // not_found initially evals true
		for (int j = 0; j < len2; ++j) {
			if (s1[i] == s2[j]) {
				not_found = 0;
			}
		}
		if (not_found) break;
		++res;
	}
	return res;
}