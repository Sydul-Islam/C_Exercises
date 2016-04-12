#include <stdio.h>
int main()
{
    double a,b;
    printf("Please input the value of a :");
    scanf("%lf", &a);

    printf("Please input the value  of b :");
    scanf("%lf", &b);

    if(a > b){
        printf("A is geater than B.");
    }
    else if(a <b ){
        printf("A is less than B.");
    }
    else if (a == b) {
        printf("A and B are equal.");
    }
    return 0;
}
