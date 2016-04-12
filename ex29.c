#include <stdio.h>
int main()
{
    int m = 0,n,i=1;
    printf("please input the value of n :");
    scanf("%d", &n);
    for(i= 1; i <= 10; i = i+1){
        m = m + n;
        printf("%d * %d = %d\n",n,i,m);
        }
        return 0;
}
