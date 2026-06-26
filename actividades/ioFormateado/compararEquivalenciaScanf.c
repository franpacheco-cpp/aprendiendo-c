#include <stdio.h>

int main(void){
  int x, x2, x3;
  float y, y2;

  printf("Introducir un entero: ");
  scanf("%d", &x);
  printf("\t%d\n", x);

  printf("Introducir un entero: ");
  scanf(" %d", &x);
  printf("\t%d\n", x);

  printf("Introducir tres enteros: ");
  scanf("%d-%d-%d", &x, &x2, &x3);
  printf("\t%d\t%d\t%d\n", x, x2, x3);

  printf("Introducir tres enteros: ");
  scanf("%d -%d -%d", &x, &x2, &x3);
  printf("\t%d\t%d\t%d\n", x, x2, x3);

  printf("Introducir un decimal: ");
  scanf("%f", &y);
  printf("\t%f\n", y);

  printf("Introducir un decimal: ");
  scanf("%f ", &y);
  printf("\t%f\n", y);

  printf("Introducir dos decimales: ");
  scanf("%f,%f", &y, &y2);
  printf("\t%f\n", y, y2);

  printf("Introducir dos decimales: ");
  scanf("%f, %f", &y, &y2);
  printf("\t%f\t%f\n", y, y2);

  return 0;
}
