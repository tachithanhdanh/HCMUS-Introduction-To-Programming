#include <stdio.h>
#include <math.h>

int main(void) {
  printf("Nhap p, q = ");
  long double p, q;
  scanf("%Lf%Lf", &p, &q);
  long double A = sqrtl(powl(p, 6.0L) / 27.0L + powl(q, 2.0L) / 4.0L);
  long double B = q / 2.0L;
  long double x = cbrtl(A - B) - cbrtl(A + B);
  printf("Nghiem x = %.10Lf\n", x);
  return 0;
}