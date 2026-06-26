#include <stdio.h>

int main(void) {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, suma1, suma2, total;

  printf("Ingresar los primeros 11 dígitos: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);

  suma1 = d + i2 + i4 + j1 +j3 +j5;
  suma2 = i1 + i3 + i5 + j2 + j4;
  total = 3 * suma1 + suma2;

  printf("El dígito de comprobación es: %d\n", 9 - ((total - 1) % 10));

  return 0;
}
