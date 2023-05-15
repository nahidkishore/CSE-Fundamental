#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int length, capital = 0, small = 0, space = 0;

    fgets(a, 1000, stdin);
    length = strlen(a);

    for (int i = 0; i < length; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            capital++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            small++;
        }
        else if (a[i] == ' ')
        {
            space++;
        }
    }

    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);

    return 0;
}
