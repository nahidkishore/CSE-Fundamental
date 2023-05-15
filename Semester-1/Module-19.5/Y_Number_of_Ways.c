#include <stdio.h>

int countWays(int start, int end)
{
    if (start == end)
    {
        return 1;
    }
    else if (start > end)
    {
        return 0;
    }
    else
    {
        return countWays(start + 1, end) + countWays(start + 2, end) + countWays(start + 3, end);
    }
}

int main()
{
    int start, end;
    scanf("%d %d", &start, &end);
    printf("%d\n", countWays(start, end));
    return 0;
}
