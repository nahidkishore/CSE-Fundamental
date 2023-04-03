#include <stdio.h>
int main()
{
  int a, b, sum, subtract, mul;
  float div;
  scanf("%d %d", &a, &b);
  sum = a + b;
  subtract = a - b;
  mul = a * b;
  div = (a * 1.0) / b;
  printf("sum of two number : %d", sum);
  printf("substraction of two number : %d", subtract);
  printf("multiplication of two number : %d", mul);
  printf("division of two number : %0.2f", div);
  return 0;
}