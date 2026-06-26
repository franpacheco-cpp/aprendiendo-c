#include <stdio.h>

int main(void) {
  int n1, denom1, n2, denom2, nResultado, denomResultado;

  printf("Insertar primera fracción: ");
  scanf("%d / %d + %d / %d", &n1, &denom1, &n2, &denom2);

  nResultado = n1 * denom2 + n2 * denom1;
  denomResultado = denom1 * denom2;

  printf("El resultado de la suma es %d/%d\n", nResultado, denomResultado);

  return 0;
}
