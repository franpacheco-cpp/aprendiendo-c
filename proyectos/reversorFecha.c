#include <stdio.h>

int main(void) {
  int mes, dia, año;

  printf("Insertar una fecha (mm/dd/aaaa): ");
  scanf("%d / %d / %d", &mes, &dia, &año);

  printf("Insertaste la fecha %d/%d/%d\n", año, mes, dia);

  return 0;
}
