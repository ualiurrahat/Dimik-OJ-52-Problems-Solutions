// Solution to Problem 41 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 41: Sum of Sequence 2

#include <stdio.h>

// function to find factorial of a number
long long int factorial(long long int n)
{
    long long int product = 1;
    for (long long int i = 1; i <= n; i++)
    {
        product = product * i;
    }
    return product;
}
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        double sum = 0.0;
        for (int i = 1; i <= n; i++)
        {
            sum += ((double)i / factorial(i));
        }
        printf("%0.4lf\n", sum);
    }
    return 0;
}