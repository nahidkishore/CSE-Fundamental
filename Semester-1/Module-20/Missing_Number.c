#include <stdio.h>

int main()
{
    int t;
    unsigned int s, a, b, c;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%u %u %u %u", &s, &a, &b, &c);
        unsigned int missing_number = s - a - b - c;
        printf("%u\n", missing_number);
    }
    return 0;
}
