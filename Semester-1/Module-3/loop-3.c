#include<stdio.h>
int main()
{
  int sum = 0;
  int i;
  int n;
  scanf("%d", &n);
  for (i = 1; i <= n; i += 1)
  {
    sum = sum + i;
   // printf("%d\n", sum); show how to increment process
  }
  printf("%d\n", sum);
  return 0;
}