#include <stdio.h>
#include <string.h>

int main()
{
  char x[21], y[21];
  scanf("%s %s", x, y);

  int len = strlen(x) < strlen(y) ? strlen(x) : strlen(y);
  int i;
  for (i = 0; i < len; i++)
  {
    if (x[i] < y[i])
    {
      printf("%s", x);
      break;
    }
    else if (y[i] < x[i])
    {
      printf("%s", y);
      break;
    }
  }

  if (i == len)
  {
    printf("%s", strlen(x) < strlen(y) ? x : y);
  }

  return 0;
}
