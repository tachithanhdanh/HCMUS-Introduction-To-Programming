#include "xuly.h"

bool is_sorted(int arr[], int size) {
	if (size == 1) return true;
	for (int i = 1; i < size; ++i) {
		// short circuit
		// if decreasing then return false
		if (arr[i] < arr[i - 1]) {
			return false;
		}
	}
	return true;
}

bool is_palindrome(int arr[], int size) {
	if (size == 1) return true;
	int l = 0, r = size - 1;
	while (l < r) {
		if (arr[l] != arr[r]) {
			return false;
		}
		++l, --r;
	}
	return true;
}

bool check_arithmetic_sequence(int arr[], int size) {
	if (size < 3) return true;
	int dif = arr[1] - arr[0];
	for (int i = 2; i < size; ++i) {
		if (dif != arr[i] - arr[i - 1]) {
			return false;
		}
	}
	return true;
}