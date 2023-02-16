#include "kt_xuly.h"
#include "kt_phanso.h"

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

void xu_ly(const char s[], char ket_qua[]) {
	int len = mystrlen(s);
	const char check[] = "0123456789/";
	char temp[N];
	for (int i = 0; i < N; ++i) {
		temp[i] = '\0';
	}
	int len_to_copy = 0;
	int pos = 0;
	int cur = 0;
	while (pos < len) {
		pos = findSpan(s, pos, check);
		len_to_copy = countSpan(s, pos, check);
		strncpy(temp, s + pos, len_to_copy);
		temp[len_to_copy] = '\0';
		Fraction ans = parseFraction(temp);
		for (int i = 0; i < N; ++i) temp[i] = '\0';
		if (len_to_copy) {
			sprintf(temp, "%d/%d ", ans.numerator, ans.denominator);
			int j = 0;
			len_to_copy = mystrlen(temp);
			while (j < len_to_copy) {
				ket_qua[cur + j] = temp[j];
				++j;
			}
			cur += len_to_copy;
		}
		//printf("%d/%d ", ans.numerator, ans.denominator);
		pos += len_to_copy;
	}
	ket_qua[cur] = '\0';
	return;
}

// xyz2/4@#&!12@ab/6