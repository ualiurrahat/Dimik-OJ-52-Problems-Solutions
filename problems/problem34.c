// Solution to Problem 34 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 34: Divisible 2
#include <stdio.h>

// Function to compute GCD using Euclidean Algorithm
long long gcd(long long a, long long b)
{
    while (b)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute LCM safely to avoid overflow
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--)
    {
        long long a, b, num;
        scanf("%lld %lld %lld", &a, &b, &num); // Read inputs

        long long lcmValue = lcm(a, b); // Compute LCM of a and b

        // Start from the first multiple of LCM within range
        for (long long i = lcmValue; i <= num; i += lcmValue)
        {
            printf("%lld\n", i);
        }
    }
    return 0;
}
