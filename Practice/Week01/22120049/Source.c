/* Bai_4.1.c */
//#include <stdio.h>
//
//int main(void) {
//  float a, b;
//  printf("Nhap a = ");
//  scanf_s("%f", &a);
//  printf("Nhap b = ");
//  scanf_s("%f", &b);
//  if (b == 0.0) {
//    puts("Khong duoc tinh do mau bang 0");
//  } else {
//    printf("Thuong = %f\n", a / b);
//  }
//  return 0;
//}

/* Bai_4.2.c */
//#include <stdio.h>
//
//int main(void) {
//  printf("Nhap x = ");
//  int x;
//  scanf_s("%d", &x);
//  int sum = 0;
//  while (x) {
//    sum += (x % 10);
//    x /= 10;
//  }
//  printf("Tong cac chu so = %d", sum);
//  return 0;
//}

/* Bai_4.3.c */
//#include <stdio.h>
//
//int main(void) {
//  int nam_sinh;
//  printf("Nhap nam sinh = ");
//  scanf_s("%d", &nam_sinh);
//  int nam_hien_tai = 2022;
//  int tuoi = nam_hien_tai - nam_sinh;
//  printf("Ban sinh nam %d, vay ban %d tuoi", nam_sinh, tuoi);
//  return 0;
//}

/* Bai_4.4.c */
//#include <stdio.h>
//
//int main(void) {
//  char ky_tu;
//  printf("Nhap ky tu ky_tu = ");
//  scanf_s("%c", &ky_tu, 1);
//  printf("Ky tu da nhap co ma ASCII la %d\n", (int)ky_tu);
//
//  int ma_ASCII;
//  printf("Nhap ma ASCII = ");
//  scanf_s("%d", &ma_ASCII);
//  printf("Ma ASCII da nhap co ky tu tuong ung la %c", (char)ma_ASCII);
//
//  return 0;
//}

/* Bai_4.5.c */
//#include <stdio.h>
//
//#define Pi 3.141592653
//
//int main(void) {
//  double ban_kinh;
//  printf("Nhap ban kinh = ");
//  scanf_s("%lf", &ban_kinh);
//  double chu_vi = 2 * Pi * ban_kinh;
//  printf("Chu vi hinh tron = %f\n", chu_vi);
//  double dien_tich = Pi * ban_kinh * ban_kinh;
//  printf("Dien tich hinh tron = %f\n", dien_tich);
//  return 0;
//}

/* Bai_4.6.c */
//#define _USE_MATH_DEFINES // define cai nay de su dung M_PI
//#include <stdio.h>
//#include <math.h>
//
//
//int main(void) {
//  double R, h;
//  printf("Nhap ban kinh day hinh tru tron R = ");
//  scanf_s("%lf", &R);
//  printf("Nhap chieu cao hinh tru tron h = ");
//  scanf_s("%lf", &h);
//  double SDAY = M_PI * R * R;
//  double SXQ = 2 * M_PI * R * h;
//  double V = SDAY * h;
//  printf("Dien tich day hinh tru tron = %f\n", SDAY);
//  printf("Dien tich xung quanh hinh tru tron = %f\n", SXQ);
//  printf("The tich hinh tru tron = %f\n", V);
//  return 0;
//}

/* Bai_4.7.c */
//#define _USE_MATH_DEFINES // define cai nay de su dung M_PI
//#include <stdio.h>
//#include <math.h>
//
//int main(void) {
//  double x;
//  printf("Nhap so thuc x = ");
//  scanf_s("%lf", &x);
//
//  double Y1 = 4 * (x * x + 10 * x * sqrt(x) + 3 * x + 1);
//  printf("Gia tri y1 = %.10f\n", Y1);
//
//  double Y2 = (sin(M_PI * x * x) + sqrt(x * x + 1)) / (exp(x * 2) + cos((M_PI / 4) * x));
//  printf("Gia tri y2 = %.10f\n", Y2);
//
//  return 0;
//}

/* Bai_4.8.c */
//#include <stdio.h>
//
//int main() {
//  int N, so_tien_ban_dau;
//  printf("Nhap so tien N = ");
//  scanf_s("%d", &N);
//
//  so_tien_ban_dau = N;
//
//  int so_to_tien_10_dong = N / 10;
//
//  // lay phan du cho 10 de ra so tien con lai sau khi doi ra thanh cac to tien 10 dong
//  N %= 10;
//
//  int so_to_tien_5_dong = N / 5;
//
//  // lay phan du cho 5 de ra so tien con lai sau khi doi ra thanh cac to tien 5 dong
//  N %= 5;
//
//  int so_to_tien_2_dong = N / 2;
//
//  // lay phan du cho 2 de ra so tien con lai sau khi doi ra thanh cac to tien 2 dong
//  N %= 2;
//
//  // so dong con lai doi thanh to 1 dong
//  int so_to_tien_1_dong = N;
//
//  printf("So tien da duoc quy doi la\n");
//  printf("N = %d dong = %d to 10 dong + %d to 5 dong + %d to 2 dong + %d to 1 dong\n",
//    so_tien_ban_dau, so_to_tien_10_dong, so_to_tien_5_dong, so_to_tien_2_dong, so_to_tien_1_dong);
//  return 0;
//}