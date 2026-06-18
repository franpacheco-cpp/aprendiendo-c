#include <stdio.h>

int main(void){
  int cantidad, cantidad20, cantidad10, cantidad5, cantidad1;

  printf("Introduce una cantidad de billetes: ");
  scanf("%d", &cantidad);

  cantidad20 = cantidad/20;
  cantidad %= 20;
  cantidad10 = cantidad/10;
  cantidad %= 10;
  cantidad5 = cantidad/5;
  cantidad1 = cantidad % 5;

  printf("Billetes $20: %d\n", cantidad20);
  printf("Billetes $10: %d\n", cantidad10);
  printf("Billetes $5: %d\n", cantidad5);
  printf("Billetes $1: %d\n", cantidad1);

  return 0;
}
