#include <stdio.h>
void printLove(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    printLove(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printLove(n);
    return 0;
}