#include <stdio.h>
int main()
{
    int n, i, index, value;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d%d", &index, &value);
    arr[index] = value;

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}