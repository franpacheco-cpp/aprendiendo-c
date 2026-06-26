#include <stdio.h>

int main(void){
  int n, n1, n2, n3;

  printf("Insertar un número (tres dígitos): ");
  scanf("%d", &n);

  n1 = n/100;
  n = n%100;
  n2 = n/10;
  n3 = n%10;

  printf("El número al reves es: %d%d%d\n", n3, n2, n1);

  return 0;
}
