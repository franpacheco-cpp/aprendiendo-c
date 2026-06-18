#include <stdio.h>

int main(void){
  float a = 3.4343f, b = 5.34f, c = 6.0f;

  printf("\tSUPER TABLA DE ELEMENTOS\n");
  printf("|\tA\t|\tB\t|\tC\t|\n");
  printf("|%10.4f\t|\t%-8.2f|\t%-8.2f|\n", a, b, c);

  return 0;
}
