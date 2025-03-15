// Solution to Problem 4 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 3: Divisor

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    for (int i = 1; i <= t; i++) // Loop through each test case
    {
        int n;
        scanf("%d", &n); // Read the input number

        // Print the case number and start the divisor list with 1 (every number is divisible by 1)
        printf("Case %d: %d", i, 1);

        // Loop to find divisors up to sqrt(n)
        for (int j = 2; j <= sqrt(n); j++)
        {
            if (n % j == 0) // Check if j is a divisor of n
            {
                printf(" %d", j); // Print the divisor
            }
        }

        printf(" %d\n", n); // Print the number itself (as it is always a divisor)
    }

    return 0; // Indicate successful execution
}
