#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of all elements of array = %d", sum);
    return 0;
}