#include <stdio.h>
int main()
{
    int n, x1, x2, tiger = 0, pathan = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &x1, &x2);
        if (x1 > x2)
        {
            tiger++;
        }
        else if (x1 < x2)
        {
            pathan++;
        }
    }
    if (tiger > pathan)
    {
        printf("Tiger\n");
    }
    else if (pathan > tiger)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }
    return 0;
}