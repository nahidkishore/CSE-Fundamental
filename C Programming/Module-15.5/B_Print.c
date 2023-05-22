// #include <stdio.h>
// int main()
// {
//     int i, n;

//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)

//     {
//         printf("%d", i);
//     }
//     return 0;
// }

#include <stdio.h>
void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int i, n;
    scanf("%d", &n);
    print(n);
    return 0;
}
