#include "xuly2_6_3.h"

const double eps = 1E-7;

bool lap_thanh_tam_giac(double a, double b, double c) {
	return (a + b - c > eps && a + c - b > eps && b + c - a > eps);
}

void kiem_tra_loai_tam_giac(bool& vuong, bool& can, bool& deu, double a, double b, double c) {
	deu = (c - a < eps);
	vuong = std::fabs(c * c - (a * a + b * b)) < eps;
	can = (b - a < eps) || (c - b < eps);
	return;
}

