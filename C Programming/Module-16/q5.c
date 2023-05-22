#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
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
    return pal;
}

int main()
{
    char s[1001];
    scanf("%s", s);
    if (is_palindrome(s) == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
