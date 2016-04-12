#include <stdio.h>
int main()
{
    double n;
    printf("Enput the value of n : ");
    scanf("%lf", &n);
    if(n > 0){
        printf("The number is positive\n");
    }
    else if(n < 0){
        printf("The number is negative\n");
    }
    else if(n == 0){
         printf("The number is Zerro\n");
    }
    return 0;
}
