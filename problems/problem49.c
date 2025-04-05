// Solution to Problem 49 from "52 Programming Problems" by Tamim Shahriar Subeen
// Problem 49: Check whether a number is prime or not

#include <stdio.h>
#include <math.h>

int isPrime(long long int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    long long int limit = sqrt(n);
    for (long long int i = 3; i <= limit; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n;
        scanf("%lld", &n);

        if (isPrime(n))
        {
            printf("%lld is a prime\n", n);
        }
        else
        {
            printf("%lld is not a prime\n", n);
        }
    }

    return 0;
}
