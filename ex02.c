#include <stdio.h>
    int main()
{
    double a,b,sum;
    printf("Please input a number");
    scanf("%lf", &a);
     printf("Please input another number");

     scanf("%lf", &b);
     sum = a + b;
     printf("Vai ami sure joke fool: %lf\n", sum);
     printf("Vai ami sure joke fool: %0.2lf\n", sum);
     return 0;
    }
