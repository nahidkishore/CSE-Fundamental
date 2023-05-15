#include <stdio.h>
void printNumbers(int n)
{
    if (n >= 1)
    {
        printNumbers(n - 1);
        printf("%d\n", n);
    }
}
int main()
{

    int n;
    scanf("%d", &n);
    printNumbers(n);
    return 0;
}