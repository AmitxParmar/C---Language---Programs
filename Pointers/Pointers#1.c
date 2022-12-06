#include <stdio.h>

int main(void) {
  int a = 6, *b;
  printf("%d\n  ", a);
  printf("%d", &a);
  printf("%d", *&a);  // We cannot store anything in &a as &a is not a variable, -
                     // It is the way to represent address of block x.
  b = &a;           // We can store address in another variable.
                   // But B has to be declared before use with "*".
}
