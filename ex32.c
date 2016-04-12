#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a integer: ");
    scanf("%d", &n);
    printf("\nPrime number between 2 and %d are:",n);

    for(i=2; i <= n; i++)
    {
        if(1 == is_prime(i))
            printf("%d ", i);
    }
}

int is_prime(int n)
{
    int i;

    if(n < 2)
    {
        return 0;
    }

    for(i = 2; i <= n/2; i++)
    {
        if(mod(n, i) == 0)
            return 0;
    }

    return 1;
}

int mod(int n, int i)
{
    int a, b, c;
    do{
        a = n / i;
        b = a * i;
        c = n - b;
    }while(c > i);

    return c;
}
