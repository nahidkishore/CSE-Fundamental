#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
    //     double x;
    //     scanf("%lf", &x);
    //    // int result = ceil(x);
    //    //int result = floor(x);
    //    int result = round(x);

    // int x;
    // scanf("%d", &x);
    // double result = sqrt(x);
    // printf("%0.2lf", result);

    int a,b;
    scanf("%d %d", &a, &b);
    int result = pow(a,b); // 3, 4 = 3x3x3x3=81
    printf("%d\n", result);

    // abs check negative value to positive

    return 0;
}