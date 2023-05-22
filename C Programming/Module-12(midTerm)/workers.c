#include <stdio.h>

int main()
{
  int M1, M2, D;
  scanf("%d %d %d", &M1, &M2, &D);

  int x = (M1 * D) / M2;

  printf("%d\n", x);

  return 0;
}
