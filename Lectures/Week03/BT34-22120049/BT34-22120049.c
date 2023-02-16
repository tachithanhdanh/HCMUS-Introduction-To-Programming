#include <stdio.h>
#include <math.h>

int main(void) {
  printf("Thoi diem T1 (h m s) = ");
  int h1, m1, s1;
  scanf("%d%d%d", &h1, &m1, &s1);

  printf("Thoi diem T2 (h m s) = ");
  int h2, m2, s2;
  scanf("%d%d%d", &h2, &m2, &s2);

  int tong_giay_T1 = h1 * 3600 + m1 * 60 + s1;
  int tong_giay_T2 = h2 * 3600 + m2 * 60 + s2;
  printf("Khoang cach = %d", abs(tong_giay_T1 - tong_giay_T2));
  return 0;
}