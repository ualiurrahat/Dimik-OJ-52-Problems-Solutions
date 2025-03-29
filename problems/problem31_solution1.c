// Solution to Problem 31 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 31: Perfect Number 2
// This is the real solution to find perfect number from 1 to N
// but Dimik OJ gives TLE error. But the intuition is here.

#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect number
int is_perfect(int num)
{
    if (num < 2) // Perfect numbers are always >= 2
    {
        return 0; // Not a perfect number
    }

    int sum = 1; // 1 is always a divisor (excluding itself)

    // Iterate through possible divisors up to sqrt(num)
    for (int i = 2; i * i <= num; i++)
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
    scanf("%d", &t); // Read number of test cases

    while (t--)
    {
        int n;
        scanf("%d", &n); // Read upper limit for perfect numbers

        // Check and print all perfect numbers up to 'n'
        for (int i = 1; i <= n; i++)
        {
            if (is_perfect(i)) // If 'i' is a perfect number
            {
                printf("%d\n", i); // Print the perfect number
            }
        }
    }
    return 0;
}
