#include <stdio.h>

int main(void) {
  int gs1, idGrupo, codigoEditorial, nItem, digitoFinal;
  printf("Ingresar ISBN: ");
  scanf("%d - %d - %d - %d - %d", &gs1, &idGrupo, &codigoEditorial, &nItem, &digitoFinal);

  printf("Prefijo de GS1: %d\nIdentificador de Grupo: %d\nCódigo de Editorial: %d\nNúmero de Item: %d\nDigito final: %d\n", gs1, idGrupo, codigoEditorial, nItem, digitoFinal);

  return 0;
}
