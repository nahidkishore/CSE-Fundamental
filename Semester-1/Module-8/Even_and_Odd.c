// You will be given a positive integer N and N numbers after that. 
// You need to tell the sum of even numbers and the sum of odd numbers separated by a space.

#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];
    int evenSum = 0, oddSum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum = evenSum + arr[i];
        }
        else
        {
            oddSum = oddSum + arr[i];
        }
    }
    printf("%d %d ", evenSum, oddSum);

    return 0;
}