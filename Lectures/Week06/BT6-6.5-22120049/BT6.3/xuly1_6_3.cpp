#include "xuly1_6_3.h"

void sort(double& a, double& b, double& c) {
	if (a > b) swap(a, b);
	if (a > c) swap(a, c);
	if (b > c) swap(b, c);
}

void swap(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
	return;
}

bool kiem_tra_nhap_sai(double a, double b, double c) {
	return (a <= 0.0 || b <= 0.0 || c <= 0.0);
}