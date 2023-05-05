#include <stdio.h>
int main()
{
  double x = 5.26;
  double *ptr = &x;
  
  printf("x er value - %0.2lf\n", x);
  printf("ptr er value - %0.2lf", *ptr);


  return 0;
}