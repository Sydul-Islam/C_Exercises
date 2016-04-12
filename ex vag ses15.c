#include <stdio.h>
int main()
{
    int n,a,sum1,sum2,sum3;
    printf("please input the value of n :");
    scanf("%d", &n);

    printf("please input the value of a :");
    scanf("%d", &a);
    sum1 = n/a;
    sum2 = a*sum1;
    sum3 = n-sum2;
    printf("Vag ses hoilo : %d\n",sum3 );

    return 0;
}
