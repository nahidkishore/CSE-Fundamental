#include <stdio.h>
#include <math.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    float price = p / (1 - x / 100.0);
    price = ceil(price * 100) / 100;
    printf("%.2f\n", price);

    return 0;
}