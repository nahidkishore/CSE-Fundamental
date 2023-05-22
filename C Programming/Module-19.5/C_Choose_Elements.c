#include <stdio.h>

int main()
{
    int n, k, a[1000];
    long long sum = 0;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sort the array in descending order
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Get the sum of the largest k elements
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }

    printf("%lld\n", sum);

    return 0;
}
