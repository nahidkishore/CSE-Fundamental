#include <stdio.h>

void printEvenNumbers(int n, int arr[], int i)
{
    if (i >= n)
    {
        return;
    }
    printEvenNumbers(n, arr, i + 2);
    if (i % 2 == 0)
    {
        printf("%d ", arr[i]);
    }
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
    printEvenNumbers(n, arr, 0);
    return 0;
}