#include <stdio.h>

struct point {
  int x, y, z;
};
int main() {
  // Example of initializing using Designated Initialization.
  struct point p1 = {
      .x = 2,
      .y = 1,
      .z = 1,
  };
  struct point p2 {
    .x = 20
  };

  printf("x=%d, y=%d, z=%d\n", p1.x, p1.y, p1.z);
  printf("x=%d", p2.x);
  return 0;
}
// This function is only used in C.