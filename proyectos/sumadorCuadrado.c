#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;

  printf("Ingresa 16 números del 1 al 16 en cualquier orden: \n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

  printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16);
  printf("Suma de las filas: %d %d %d %d\n", n1+n2+n3+n4, n5+n6+n7+n8, n9+n10+n11+n12, n13+n14+n15+n16);
  printf("Suma de las columnas: %d %d %d %d\n", n1+n5+n9+n13, n2+n6+n10+n14, n3+n7+n11+n15, n4+n8+n12+n16);
  printf("Suma de las diagonales: %d %d\n", n1+n6+n11+n16, n4+n7+n10+n13);

  return 0;
}
