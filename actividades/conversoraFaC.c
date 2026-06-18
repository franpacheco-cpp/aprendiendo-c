#include <stdio.h>

#define PT_CONGELAMIENTO 32.0f
#define FACTOR_ESCALA (5.0f / 9.0f)

int main(void){
  float fahrenheit, celsius;

  printf("Ingresar temperatura en grados fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - PT_CONGELAMIENTO) * FACTOR_ESCALA;
  printf("%.1f°F son %.1f°C\n", fahrenheit, celsius);

  return 0;
}
