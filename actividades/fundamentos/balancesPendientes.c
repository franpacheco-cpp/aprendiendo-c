#include <stdio.h>

int main(void){
  float prestamo, tasaAnual, tasaMensual, pagoMensual, primerBalance, segundoBalance, tercerBalance;
  
  printf("Prestamo de $");
  scanf("%f", &prestamo);
  printf("Tasa de interés de ");
  scanf("%f", &tasaAnual);
  printf("Pago mensual de $");
  scanf("%f", &pagoMensual);

  tasaMensual = (tasaAnual/100) / 12;
  
  primerBalance = (prestamo-pagoMensual) + (prestamo*tasaMensual);
  segundoBalance = (primerBalance-pagoMensual) + (primerBalance*tasaMensual);
  tercerBalance = (segundoBalance-pagoMensual) + (segundoBalance*tasaMensual);

  printf("Balance restante después del primer pago: $%.2f\n", primerBalance);
  printf("Balance restante después del segundo pago: $%.2f\n", segundoBalance);
  printf("Balance restante después del tercer pago: $%.2f\n", tercerBalance);


  return 0;
}
