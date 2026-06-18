#include <stdio.h>

int main(void){
  printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
  printf("Calculadora de Peso Dimensional\n");
  printf("Medida: Pulgadas\n");
  printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");

  int altura, largo, ancho, volumen, peso;

  printf("Ingresar altura de la caja: ");
  scanf("%d", &altura);
  printf("Ingresar largo de la caja: ");
  scanf("%d", &largo);
  printf("Ingresar ancho de la caja: ");
  scanf("%d", &ancho);
  
  volumen = altura * largo * ancho;
  peso = (volumen + 165) / 166;

  printf("Volumen (Pulgadas cúbicas): %d\n", volumen);
  printf("Peso dimensional (Libras): %d\n", peso);

  return 0;
}
