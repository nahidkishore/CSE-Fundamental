#include <stdio.h>
int main()
{
  int i, j, k, n;
  scanf("%d %d", &n, &k);

  for (i = 1; i <= k; i++)
  {
    for (j = 1; j <= n; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}