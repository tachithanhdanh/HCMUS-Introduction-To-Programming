#ifndef BT9_BT93_PROCESS_H_
#define BT9_BT93_PROCESS_H_
#include "Point.h"
#include "Triangle.h"

double getLineLength(const Point &A, const Point &B);
Point getMidpoint(const Point &A, const Point &B);
Point getCentroid(const Triangle &tri);
bool check_triangle(Triangle &tri);

#endif // !BT9_BT93_PROCESS_H_
