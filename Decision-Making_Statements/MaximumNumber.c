#include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter The Value of A: ");
  scanf("%d", &a);
  printf("\nEnter The Value of B: ");
  scanf("%d", &b);
  printf("\nEnter The Value of C: ");
  scanf("%d", &c);

  if (a > b && a > c) {
    printf("The value of A is Max");

  } else if (b > a && b > c) {
    printf("The value of B is Max");
  } else {
    printf("The value of C is Max");
  }
  int getchar(void);
  return 0;
}