#include <cstdio>
#include <iostream>

int main(void) {
  std::printf("Nhap thang va nam = ");
  int thang, nam;
  std::scanf("%d%d", &thang, &nam);
  int so_ngay;
  if (thang == 2) {
    if (nam % 100 == 0) {
      if (nam % 400 == 0) {
        so_ngay = 29;
      } else {
        so_ngay = 28;
      }
    } else if (nam % 4 == 0) {
      so_ngay = 29;
    } else {
      so_ngay = 28;
    }
  } else {
    if (thang <= 7) {
      if (thang % 2 == 1) {
        so_ngay = 31;
      } else {
        so_ngay = 30;
      }
    } else {
      if (thang % 2 == 0) {
        so_ngay = 31;
      } else {
        so_ngay = 30;
      }
    }
  }
  std::printf("Thang %d nam %d co %d ngay\n", thang, nam, so_ngay);
  return 0;
}