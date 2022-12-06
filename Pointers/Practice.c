#include <stdio.h>
int main() {
  int a = 1;
  while (a >= 6, a++) {
    a++;
    if (a < 8 && a < 10)
      printf("%d", a);
  }
}