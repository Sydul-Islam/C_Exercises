#include <stdio.h>
int main()
{
    int n;
    printf("Please input the value of n  :");
    scanf("%d", &n);
    while(n <= 10) {
    printf("%d\n",n);
    }
    n++;

    return 0;
}
