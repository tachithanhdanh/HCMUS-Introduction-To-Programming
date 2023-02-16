#include "IOfunctions.h"
#include "Process.h"
#include <cstdio>

void getTriangleCoordinate(Triangle &tri) {
	bool valid;
	do {
		valid = true;
		getPointCoordinate(tri.A, pointA);
		getPointCoordinate(tri.B, pointB);
		getPointCoordinate(tri.C, pointC);
		if (check_triangle(tri) == false) {
			valid = false;
			std::fputs("Toa do nhap vao khong lap thanh mot tam giac, vui long nhap lai!\n", stdout);
		}
	} while (!valid);
	return;
}

void getPointCoordinate(Point &pt, pointOrder p) {
	std::printf("Nhap toa do dinh thu %d cua tam giac:\n", p);
	std::printf("Nhap x = ");
	std::scanf("%lf", &pt.x);
	std::printf("Nhap y = ");
	std::scanf("%lf", &pt.y);
	return;
}

void printResult(const Triangle &tri, output out) {
	if (out == tinh_do_dai_canh) {
		std::printf("Do dai cac canh trong tam giac: %lf; %lf; %lf.\n",
			getLineLength(tri.A, tri.B), getLineLength(tri.A, tri.C), getLineLength(tri.B, tri.C));
	} else if (out == tim_trung_diem) {
		std::printf("Toa do trung diem cua cac canh trong tam giac la cac diem co toa do:\n");
		Point m1 = getMidpoint(tri.A, tri.B);
		Point m2 = getMidpoint(tri.A, tri.C);
		Point m3 = getMidpoint(tri.B, tri.C);
		std::printf("(%lf, %lf)\n(%lf, %lf)\n(%lf, %lf).\n",
			m1.x, m1.y, m2.x, m2.y, m3.x, m3.y);
	} else {
		Point centroid = getCentroid(tri);
		std::printf("Toa do trong tam cua tam giac la diem G(%lf, %lf).\n", centroid.x, centroid.y);
	}
	return;
}