#include <cstdio>

int main(void) {
  // Khoi tao bien_dem ngoai vong lap de
  //   danh dau thu tu cua so thoa an dieu kien
  int bien_dem = 0;
  for (int i = 100; i < 1000; ++i) {
    int chu_so_hang_chuc = (i / 10) % 10;
    int chu_so_hang_don_vi = i % 10;
    int chu_so_hang_tram = i / 100;
    if (chu_so_hang_chuc == chu_so_hang_don_vi + chu_so_hang_tram) {
      std::printf("%d: %d\n", ++bien_dem, i);
    }
  }
  std::printf("Co tat ca %d so thoa tinh chat.\n", bien_dem);
  return 0;
}