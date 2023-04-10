#include <stdio.h>
int main()
{
    int pass;

    while (pass != 1999)
    {
        scanf("%d", &pass);
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else  
        {
            printf("Wrong\n");
        }
    }

    return 0;
}