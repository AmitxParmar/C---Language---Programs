#include<stdio.h>

int main(void) {
  int a = 6;
  printf("%d\n", a);
  printf("%d", &a);
  printf("%d", *&a); // We cannot store anything in &a as &a is not a variable, 
}                   // it is the way to represent address of block x  