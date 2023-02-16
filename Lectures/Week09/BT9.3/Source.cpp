#include "Constants.h"
#include "IOfunctions.h"
#include "Point.h"
#include "Triangle.h"
#include "Process.h"

signed main(void) {
	Triangle tri;
	getTriangleCoordinate(tri);
	printResult(tri, tinh_do_dai_canh);
	printResult(tri, tim_trung_diem);
	printResult(tri, tim_trong_tam);
	return 0;
}