// Solution to Problem 30 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 30: Perfect Number 1

#include <stdio.h>

// Function to check if a number is a perfect number
int is_perfect(unsigned long long num)
{
    if (num < 2) // Perfect numbers are always >= 2
    {
        return 0; // Not a perfect number
    }

    unsigned long long sum = 1; // 1 is always a divisor (excluding itself)

    // Iterate through possible divisors up to sqrt(num)
    for (unsigned long long i = 2; i * i <= num; i++)
    {
        if (num % i == 0) // If 'i' is a divisor
        {
            sum = sum + i; // Add the divisor

            if (i != num / i) // If it's not a square number, add the corresponding pair divisor
            {
                sum = sum + num / i;
            }
        }
    }

    return sum == num; // Return true if sum of divisors equals num
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        unsigned long long n;
        scanf("%llu", &n);

        if (is_perfect(n))
        {
            printf("YES, %llu is a perfect number!\n", n);
        }
        else
        {
            printf("NO, %llu is not a perfect number!\n", n);
        }
    }
    return 0;
}