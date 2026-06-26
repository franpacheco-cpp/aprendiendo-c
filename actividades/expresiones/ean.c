/*
  
  Este es una calculadora del último 
  dígito en el Número de Artículo Europeo (EAN)

  Para calcularlo, se deben seguir estos pasos:
  1. Sumar el segundo, cuarto, sexto, octavo,
  decimo y doceavo dígito
  2. Sumar el primer, tercero, quinto, septimo,
  noveno y onceavo dígito
  3. Multiplicar la primera suma por 3 y sumarla
  a la otra suma
  4. Restar 1 al resultado
  5. Computar el resto cuando el total ajustado
  está dividido por 10
  6. Quitarle el resto a 9

*/

#include <stdio.h>

int main(void) {
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
  int suma1, suma2, digitoComprobante;

  printf("Insertar los 12 dígitos: ");
  scanf("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d",
        &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, 
        &d11, &d12);

  suma1 = d2+d4+d6+d8+d10+d12;
  suma2 = d1+d3+d5+d7+d9+d11;
  digitoComprobante = 9-((((3*suma1)+suma2)-1)%10);

  printf("Digito comprobante: %d\n", digitoComprobante);

  return 0;
}
