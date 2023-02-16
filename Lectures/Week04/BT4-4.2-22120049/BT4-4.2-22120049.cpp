#include <cstdio>
#include <cmath>

int main(void) {
  double a, b, c;
  std::printf("Nhap he so a, b, c = ");
  std::scanf("%lf%lf%lf", &a, &b, &c);

  // tinh biet thuc delta = b^2 - 4ac
  double delta = b * b - 4 * a * c;
  double sqrt_of_delta = sqrt(delta);

  // Neu delta ~ 0 thi phuong trinh co nghiem kep
  // O day ta noi xap xi 0 la vi kieu double co sai so nhat dinh
  if (std::fabs(delta) < 1E-7) { // neu tri tuyet doi delta nho hon 1 so rat be thi co nghiem kep
    double x = (-b) / (2.0 * a);
    std::printf("Nghiem kep = %f\n", x);
  } else if (delta > 0) {
    // Neu delta > 0 thi phuong trinh co 2 nghiem phan biet
    double x1 = (-b + sqrt_of_delta) / (2.0 * a);
    double x2 = (-b - sqrt_of_delta) / (2.0 * a); 
    std::printf("Nghiem 1 = %f\nNghiem 2 = %f\n", x1, x2);
  } else {
    // Neu delta < 0 thi phuong trinh vo nghiem
    std::printf("Phuong trinh vo nghiem!\n");
  }
  return 0;
}