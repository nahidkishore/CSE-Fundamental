#include <stdio.h>

int main()
{
    int n, i, j, flag = 1;
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if it is a unit matrix or not
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j && a[i][j] != 1)
            {
                flag = 0;
                break;
            }
            else if (i != j && a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
