#include <stdio.h>
int main()
{
    double f,c;
    printf("Enter the value of f :");
    scanf("%lf", &f);
    c = (f - 32 ) /1.8;
    printf("Temerature in celsius is : %lf\n", c);
    return 0;
}
