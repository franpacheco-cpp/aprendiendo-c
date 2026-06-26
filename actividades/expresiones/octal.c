#include <stdio.h>

int main(void) {
  int n, nOctal1, nOctal2, nOctal3, nOctal4, nOctal5;

  printf("Ingresa un número entre 0 y 32767: ");
  scanf("%5d", &n);

  nOctal5 = n % 8;
  n /= 8;

  nOctal4 = n % 8;
  n /= 8;

  nOctal3 = n % 8;
  n /= 8;

  nOctal2 = n % 8;
  n /= 8;

  nOctal1 = n % 8;

  printf("%d%d%d%d%d\n", nOctal1, nOctal2, nOctal3, nOctal4, nOctal5);

  return 0;
}
