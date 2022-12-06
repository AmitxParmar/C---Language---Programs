// Accessing Structure Elements
#include <stdio.h>

struct point {
  int x, y;
};

int main() {
  struct point p1 = {0, 2};
  // Acessing Members of Point P1
  p1.x = 20;
  printf("x = %d, y = %d", p1.x, p1.y);
  return 0;
}