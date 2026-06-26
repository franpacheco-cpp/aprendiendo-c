#include <stdio.h>

int main(void) {
  int prefijo, codigo, telefono;

  printf("Ingresar número de telefono [(xxx) xxx-xxxx]: ");
  scanf("( %d ) %d - %d", &prefijo, &codigo, &telefono);
  
  printf("Ingresaste el número %d.%d.%d\n", prefijo, codigo, telefono);

  return 0;
}
