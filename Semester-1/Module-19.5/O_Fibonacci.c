#include <stdio.h>

long long fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", fibonacci(n));
    return 0;
}
