#include <stdio.h>

int main(void) {
  double do_C;
  printf("Do C = ");
  scanf("%lf", &do_C);
  double do_F = do_C * 1.8 + 32.0;
  double do_K = do_C + 273.0;
  printf("Do F = %lf\nDo K = %lf\n", do_F, do_K);
  return 0;
}