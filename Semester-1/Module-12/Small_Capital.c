#include <stdio.h>
int main()
{
  char a[1001];
  scanf("%s", a);
  int capital_count = 0, small_count = 0;
  for (int i = 0; a[i] != '\0'; i++)
  {
    if (a[i] >= 'A' && a[i] <= 'Z')
    {
      capital_count++;
    }

    if (a[i] >= 'a' && a[i] <= 'z')
    {
      small_count++;
    }
  }

  printf("%d %d", capital_count, small_count);

  return 0;
}