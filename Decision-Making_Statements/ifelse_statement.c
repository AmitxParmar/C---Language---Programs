#include <stdio.h>
int main() {
  int per;
  printf("Enter The Percentage:");
  scanf("%d", &per);

  if (per >= 36 && per < 100) {
    printf(" The Student has Passed the Exam.");
  } else if (per > 100) {
    printf("Error!! Enter valid percentage, it should be Lesser than 100!!");
  } else {
    printf("Student has Failed the Exam. Better Luck next time!");
  }
  return 0;
}