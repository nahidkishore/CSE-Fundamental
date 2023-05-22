#include<stdio.h>
int main()
{
  int a,b;

  char p;
  scanf("%d%c %d%c",&a,&p ,&b,&p);
  printf("Your output is: %d%% %d%%", a,b);
  return 0;
}