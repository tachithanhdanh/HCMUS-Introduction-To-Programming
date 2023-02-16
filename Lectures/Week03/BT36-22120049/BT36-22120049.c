#include <stdio.h>

int main(void) {
  int so_tien;
  printf("So tien can doi = ");
  scanf("%d", &so_tien);

  int so_to_20000 = so_tien / 20000;
  // so tien con lai sau khi quy doi ra thanh to 20000
  so_tien %= 20000;

  int so_to_10000 = so_tien / 10000;
  // so tien con lai sau khi quy doi ra thanh to 10000
  so_tien %= 10000;

  int so_to_5000 = so_tien / 5000;
  // so tien con lai sau khi quy doi ra thanh to 5000
  so_tien %= 5000;

  int so_to_1000 = so_tien / 1000;
  // so tien con lai sau khi quy doi ra thanh to 1000
  so_tien %= 1000;

  printf("So to 20000: %d\n", so_to_20000);
  printf("So to 10000: %d\n", so_to_10000);
  printf("So to 5000: %d\n", so_to_5000);
  printf("So to 1000: %d\n", so_to_1000);
  printf("So tien du = %d\n", so_tien);
  return 0;
}