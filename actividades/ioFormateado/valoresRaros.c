#include <stdio.h>

int main(void) {
  int i, j;
  float x, y;

  scanf("%d%f%d", &i, &x, &j);
  printf("%d\t%f\t%d\n", i, x, j);

  scanf("%f%d%f", &x, &i, &y);
  printf("%f\t%d\t%f\n", x, i, y);

  return 0;
}
