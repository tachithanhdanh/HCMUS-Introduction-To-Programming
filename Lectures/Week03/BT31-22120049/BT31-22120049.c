#include <stdio.h>
#include <string.h> // them thu vien nay de xu li ki tu newline o cuoi xau

// do dai toi da cua xau ten
#define N 50 

int main(void) {
  fputs("Ten = ", stdout);

  char ten[N];
  fgets(ten, sizeof(ten), stdin); // co the dung scanf("%[^\n]s", ten);

  // https://en.cppreference.com/w/c/string/byte/strcspn
  // https://stackoverflow.com/questions/36903528/make-fgets-ignore-a-new-line
  ten[strcspn(ten, "\n")] = '\0';

  fputs("Nam sinh = ", stdout);

  int nam_sinh;
  scanf("%d", &nam_sinh); 

  printf("Chao ban %s, nam nay ban %d tuoi.\n", ten, 2022 - nam_sinh);
  return 0;
}