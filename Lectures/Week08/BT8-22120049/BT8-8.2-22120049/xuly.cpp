#include "xuly.h"

void kiem_duyet(char *S, const char *T) {
	int lenS = int(std::strlen(S));
	int lenT = int(std::strlen(T));
	char curSubstr[N];
	std::memset(curSubstr, '\0', sizeof(char) * N);
	const char replace[] = "###";
	int delta = lenT - 3;
	for (int i = 0; i < lenS - lenT + 1; ++i) {
		std::strncpy(curSubstr, S + i, lenT);
		// zero-terminate string due to C6053 warning.
		curSubstr[lenT] = '\0';
		if (std::strcmp(T, curSubstr) == 0) {
			// move character from i + lenT to i + 3
			if (delta > 0) {
				// the length of T is greater than that of "###"
				// move backward
				for (int j = i + 3; j + delta < lenS; ++j) {
					S[j] = S[j + delta];
				}
			} else if (delta < 0) {
				// move forward
				for (int j = lenS - delta; j + delta >= i + lenT; --j) {
					S[j] = S[j + delta];
				}
			} else {
				// nothing to move, so null statement here
				// will add some statements if needed
				;
			}
			//std::puts(S);
			// update the length of S
			lenS -= delta;
			// don't forget to terminate the string with null character
			S[lenS] = '\0';
			// censor the word
			S[i] = S[i + 1] = S[i + 2] = '#';
		}
	}
	return;
}