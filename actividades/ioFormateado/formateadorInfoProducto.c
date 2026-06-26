#include <stdio.h>

int main(void) {
  int nItem, diaCompra, mesCompra, añoCompra;
  float precioUnitario;

  printf("Insertar número de artículo: ");
  scanf("%d", &nItem);

  printf("Insertar precio unitario: ");
  scanf("%f", &precioUnitario);

  printf("Insertar fecha de compra (mm/dd/aaaa): ");
  scanf("%d / %d / %d", &mesCompra, &diaCompra, &añoCompra);

  printf("Item\tPrecio\t\tFecha\n\tUnitario\tde Compra\n");
  printf("%d\t$ %-1.2f\t%d/%d/%d\n", nItem, precioUnitario, mesCompra, diaCompra, añoCompra);

  return 0;
}
