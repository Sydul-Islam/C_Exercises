#include <stdio.h>
//#include <math.h>
int main()
{
    double n,a,d,sum;

    printf("Enter the value of n, a, d  :");
    scanf("%lf %lf %lf", &n, &a,&d);

    sum = n/2.0 *( (2*a) +(n-1)*d);

    printf("Dharatir sommosti holo : %0.2lf\n",sum);

    return 0;
}
