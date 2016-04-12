#include <stdio.h>
int main()
{
    int n;
    printf("please input the value of n : ");
    scanf("%d", &n);
    if (n >= 1 || n <= 10 ) {
        printf("Yes\n" );
    }
    else {
        printf("No\n");
    }
    return 0;
}
