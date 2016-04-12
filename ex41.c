#include <stdio.h>
int main()
{
    double  F,C;
    printf("Enter the value of C:");
    scanf("%lf", &C);
    F = (C * 1.8) + 32;
    printf("Temperature in farenheit is : %lf\n", F);
    return 0;
}
