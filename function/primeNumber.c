#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is a prime\n", n);
    else
        printf("%d is not prime\n", n);

    return 0;
}