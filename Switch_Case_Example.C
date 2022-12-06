#include <stdio.h>

int main() {
  int planet;
  printf("Enter the number of planet: ");
  scanf("%d", &planet);
  switch (planet) {
  case 1:
    printf("Mercury");
    break;

  case 2:
    printf("\nVenus");
    break;

  case 3:
    printf("\nMars");
    break;

  case 4:
    printf("\nJupiter");
    break;

  case 5:
    printf("\nSaturn");
    break;

  case 6:
    printf("\nUranus");
    break;

  case 7:
    printf("/n Neptune");
    break;
  default:
    printf("no Invalid /n");
    break;
  }
  
  return 0;
}