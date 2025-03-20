// Solution to Problem 12 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 12: Factorial 100

#include <stdio.h>

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) // Loop through each test case
    {
        int n; // Input number for which the number of trailing zeros in factorial is to be calculated
        scanf("%d", &n);

        int p = 5;   // Initial divisor to count factors of 5
        int res = 0; // Variable to store the count of trailing zeros

        // Count multiples of 5, 25, 125, etc., in n
        while (p <= n)
        {
            res = res + (n / p); // Add the count of multiples of current power of 5
            p = p * p;           // Move to the next power of 5
        }

        printf("%d\n", res); // Output the number of trailing zeros in n!
    }
    return 0;
}
