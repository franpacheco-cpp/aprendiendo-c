#include <stdio.h>
#define PI 3.1416

int main(void){
  float radio, volumen;

  printf("Introducir el radio (metros) de la esfera: ");
  scanf("%f", &radio);

  volumen = (4.0f/3.0f) * PI * (radio*radio*radio);
  printf("El volumen de la esfera es de %.1fm³\n", volumen);

  return 0;
}

