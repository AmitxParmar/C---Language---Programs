#include <stdio.h>
char names[10]; 
const char greet = "Hello";
int main() {

  printf("enter names: \n");
  scanf("%c, %c, %c, %c, %c, %c, %c", &names);
  printf("Hello ", names + greet);
  return 0;
}