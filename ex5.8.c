#include <stdio.h>
int main()
{
    int a,b,x,g;
    printf("Enter two integer :");
    scanf("%d %d", &a,&b);
    if(a < b) {
        x = a;
    }
    else {
        x = b;
    }
    for(;x >=1; x--) {
        if((a % x) == 0 && (b % x) == 0){
            g = x;
            break;
        }
    }
    printf("GCD is : %d\n",g);

    return 0;
}
