#include <stdio.h>

int main() {
  int i, j, k;
  printf("Enter N: ");
  scanf("%d", &k);
  for (i = 1; i <= k; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d", (j & 1));
    }
    printf("\n");
  }
  return 0;
}