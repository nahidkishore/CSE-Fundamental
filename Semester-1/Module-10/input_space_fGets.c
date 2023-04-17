#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
  fgets(a, 20, stdin);
  // a[8] = '\0'; if you use this technique then output show only 8 number character , because of after 8 charcter its says null, thats why its break here
  printf("%s", a);
  return 0;
}