#include <stdio.h>
    int main()
    {
        double num1,num2,sum1,sum2,sum3,sum4;
        printf("Enter a number :");
        scanf("%lf", &num1);
        printf("Enter another number :");
        scanf("%lf", &num2);
        sum1 = num1 + num2;
        sum2 = num1 - num2;
        sum3 = num1 * num2;
        sum4 = num1 / num2;
        printf("Addition%lf\n Subtraction%lf\n multiplication%lf\n divide%lf\n",sum1,sum2,sum3,sum4);
        return 0;
        }
