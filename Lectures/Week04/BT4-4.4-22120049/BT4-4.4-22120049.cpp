#include <cstdio>

int main(void) {
  int N;
  std::scanf("%d", &N);

  long long giai_thua = 1;
  for (int i = 1; i <= N; ++i) {
    giai_thua *= static_cast<long long>(i);
  }

  long double ln_of_2 = 0;
  int sign = 1;
  for (int i = 1; i <= N; ++i) {
    ln_of_2 += static_cast<long double>(sign) / i;
    sign *= -1; // doi dau
  }

  long double PI = 0;
  sign = 1;
  for (int i = 0; i <= N; ++i) {
    PI += static_cast<long double>(sign) / (2 * i + 1);
    sign *= -1; // doi dau
  }
  PI *= 4.0L;

  long long S = 0;
  for (int i = 0; i * i <= N; ++i) {
    S += static_cast<long long>(i) * i;
  }

  std::printf("N! = %lld\nln(2) = %.15Lf\nPi = %.15Lf\nS = %lld\n", giai_thua, ln_of_2, PI, S);
  return 0;
}
