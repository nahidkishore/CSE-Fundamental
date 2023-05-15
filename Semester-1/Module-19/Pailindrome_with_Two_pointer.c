#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int i = 0, j = strlen(s) - 1;
    int pal = 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            pal = 0;
            break;
        }
        i++;
        j--;
    }
    if (pal == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}