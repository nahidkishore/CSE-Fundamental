#include <stdio.h>
int main()
{
  int n, x;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  scanf("%d", &x);
  for (int i = 0; i < n; i++)
  {
    if (x == a[i])
    {
      printf("%d\n", i);
      break;
    }
    if (i == n - 1)
    {
      printf("-1");
    }
  }
  return 0;
}