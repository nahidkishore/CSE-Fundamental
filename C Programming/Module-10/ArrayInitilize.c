#include <stdio.h>
int main()
{
  // char a[6] = {'n', 'a', 'h','i', 'd'}; // no gurantee // not standard
  char a[6] = "nahid"; // gurantee/ standard  // increase 1 size for null character space
  int sz = sizeof(a) / sizeof(char);
  printf("%d\n", sz);
  printf("%s", a);
  return 0;
}

// #include <stdio.h>
// int main()
// {
//   char a[5] = "nahid";
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%c\n", a[i]);
//   }
//   return 0;
// }
