#include <stdio.h>
long long int factorialNumber(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorialNumber(n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int result = factorialNumber(n);
    printf("%lld\n", result);
    return 0;
}