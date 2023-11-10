#include <stdio.h>

int main (void){
  int res, op1, op2;
  op1 = 12;
  op2 = 2;
  float resf;

  // res = op1 + op2;
  // res = op1 - op2;
  // res = op1 * op2;
  resf = (float)op1 / (float)op2;
  res = op1 % op2;

  // printf("El resultado de la suma es: %d\n", res);
  // printf("El resultado de la resta es: %d\n", res);
  // printf("El resultado de la multiplicación es: %d\n", res);
   printf("El resultado de la división es: %f\n", resf);
   printf("El resultado de módulo es: %d\n", res);

  return 0;
}