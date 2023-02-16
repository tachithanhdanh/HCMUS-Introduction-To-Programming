#include <stdio.h>

int main(void) {
  int bang_so_xe;
  printf("So xe = ");
  scanf("%d", &bang_so_xe);
  int so_nut = 0;
  while (bang_so_xe) { // lap cho den khi bang_so_xe = 0
    // lay chu so cuoi cua bang_so_xe cong vao so_nut
    so_nut += bang_so_xe % 10; 

    // chia bang_so_xe cho 10 de loai bo chu so cuoi cua bang_so_xe
    bang_so_xe /= 10;
  }

  // lay chu so cuoi cua so_nut de ra duoc so_nut cuoi cung
  so_nut %= 10;
  printf("So nut = %d\n", so_nut);
  return 0;
}