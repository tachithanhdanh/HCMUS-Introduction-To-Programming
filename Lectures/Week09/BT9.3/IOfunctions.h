#ifndef BT9_BT93_IOFUNCTIONS_H_
#define BT9_BT93_IOFUNCTIONS_H_
#include "Point.h"
#include "Triangle.h"
#include "Constants.h"

void getTriangleCoordinate(Triangle &tri);
void getPointCoordinate(Point &pt, pointOrder p);
void printResult(const Triangle &tri, output out);

#endif // !BT9_BT93_IOFUNCTIONS_H_
