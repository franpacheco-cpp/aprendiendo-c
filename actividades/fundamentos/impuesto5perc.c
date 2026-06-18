#include <stdio.h>

int main(void){
  float cantidad;
  
  printf("Introducir una cantidad: ");
  scanf("%f", &cantidad);
  printf("Con impuesto añadido: $%.2f\n", cantidad+(cantidad*0.05));

  return 0;
}
