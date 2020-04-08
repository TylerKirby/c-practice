#include <stdio.h>

#define LOWER 0   /* lower limir of table */
#define UPPER 300 /* upper limit of table */
#define STEP 20   /* step size */

int main() {
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d %3.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }
}