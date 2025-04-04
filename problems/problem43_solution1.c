// Solution to Problem 43 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 43: Modular Exponentiation

#include <stdio.h>

int main()
{
    int t;           // Variable to store the number of test cases
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through each test case
    {
        int p, q, c;                   // Variables to store base (p), exponent (q), and modulus (c)
        scanf("%d %d %d", &p, &q, &c); // Read input values

        int sum = 1; // Initialize sum as 1, since any number raised to power 0 is 1

        // Loop to calculate (p^q) % c using naive approach
        for (int i = 1; i <= q; i++)
        {
            sum = (sum * p) % c; // Multiply by base and take modulo at each step to prevent overflow
        }

        sum = sum % c;                // Final modulo operation (redundant but ensures correctness)
        printf("Result = %d\n", sum); // Print the result in the required format
    }

    return 0; // Return 0 to indicate successful program execution
}
