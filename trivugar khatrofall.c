#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,x,y,sum;
    printf("Enter the value of a,b,c and x : ");
    scanf("%lf %lf %lf %lf", &a,&b,&c,&x);
    y = x/2.0;
    sum =y *( (y-a) * (y-b) * (y-c));
    sum = sqrt(sum);
    printf("Trivuster Khetrofall hobe : %0.2lf\n", sum);
    return 0;
}
