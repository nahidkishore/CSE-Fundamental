#include <stdio.h>

int count_before_zero(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
        count++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sz = sizeof(arr) / sizeof(int);
    int count = count_before_zero(arr, sz);
    printf("%d\n", count);
    return 0;
}
