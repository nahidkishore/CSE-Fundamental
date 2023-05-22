// do while loop
// first bar condition check chara e kaj kore fele, even wrong holeo kaj kore fele. then condition check kore jodi dekhe wrong condition ,tahole kaj kore na, 
// why we use do while loop?
// bcoz, if we need check input value wrong or not 
#include <stdio.h>
int main()
{
  int i;
  int n;
  scanf("%d", &n);

  i = 1;
  do
  {
    printf("%d\n", i);
    i += 1;
  }
   while (i <= n);

  return 0;
}
