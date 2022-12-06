#include<stdio.h>
int main() {
  int i,j,k=7;
  
  for (int i = 100; i<=k; i--) {
    for (int j = 200; j<=k; j--) {
      printf("%d", j);
    }
    printf("%d \n",i);
    break;
  }
  return 0;
}