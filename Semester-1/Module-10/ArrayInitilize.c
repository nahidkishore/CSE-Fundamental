#include <stdio.h>
int main()
{
  char a[6] = {'n', 'a', 'h','i', 'd'}; // no gurantee
  //char a[6] = "nahid"; // gurantee
  int sz = sizeof(a) / sizeof(char);
  printf("%d", sz);
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

