#include "Process.h"
#include "Constants.h"
#include <cmath>

bool check_triangle(Triangle &tri) {
	double L1 = getLineLength(tri.A, tri.B);
	double L2 = getLineLength(tri.A, tri.C);
	double L3 = getLineLength(tri.B, tri.C);
	double d1 = std::fabs(L1 + L2 - L3);
	double d2 = std::fabs(L1 + L3 - L2);
	double d3 = std::fabs(L2 + L3 - L1);
	return (d1 > EPS && d2 > EPS && d3 > EPS);
}

double getLineLength(const Point &A, const Point &B) {
	double dX = A.x - B.y, dY = B.x - B.y;
	return std::sqrt(dX * dX + dY * dY);
}

Point getMidpoint(const Point &A, const Point &B) {
	Point midpoint;
	midpoint.x = (A.x + B.x) / 2;
	midpoint.y = (A.y + B.y) / 2;
	return midpoint;
}

Point getCentroid(const Triangle &tri) {
	Point centroid;
	centroid.x = (tri.A.x + tri.B.x + tri.C.x) / 3;
	centroid.y = (tri.A.y + tri.B.y + tri.C.y) / 3;
	return centroid;
}

