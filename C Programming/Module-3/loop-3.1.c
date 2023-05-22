// init 9 digit er besi output properly dekhate pare na, tay amader long long int use korte hobe and
// "%11d" use korte hobe
#include <stdio.h>
int main()
{
  long long int sum = 0;
  int i;
  int n;
  scanf("%d", &n);
  for (i = 1; i <= n; i += 1)
  {
    sum = sum + i;
    // printf("%d\n", sum); show how to increment process
  }
  printf("%11d\n", sum);
  return 0;
}