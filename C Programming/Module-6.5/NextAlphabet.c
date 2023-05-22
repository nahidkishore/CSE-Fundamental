#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch < 'y')
    {
        ch = ch + 1;
    }
    else if (ch == 'Z')
    {
        ch = 'a';
    }
   /*  if (ch >= 'A' && ch < 'Y')
    {
        ch = ch + 1;
    }
    else if (ch == 'Z')
    {
        ch = 'A';
    } */
    printf("%c", ch);

    return 0;
}