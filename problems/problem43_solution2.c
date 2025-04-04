// Optimized Solution to Problem 43 from "52 Programming Problems" by Tamim Shahriar Subeen

#include <stdio.h>

// Function for fast modular exponentiation using Exponentiation by Squaring
int mod_exponentiation(int base, int exponent, int mod)
{
    int result = 1; // Initialize result as 1, since anything raised to power 0 is 1

    while (exponent > 0) // Loop until exponent becomes 0
    {
        if (exponent % 2 == 1) // If exponent is odd, multiply result with current base
        {
            result = (result * base) % mod; // Ensure result stays within mod range
        }

        base = (base * base) % mod; // Square the base and apply modulo to keep it manageable
        exponent /= 2;              // Reduce exponent by half (integer division)
    }

    return result; // Return the final computed modular exponentiation result
}

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Run the loop for 't' test cases
    {
        int p, q, c;                   // Variables to store base (p), exponent (q), and modulus (c)
        scanf("%d %d %d", &p, &q, &c); // Read input values for each test case

        int result = mod_exponentiation(p, q, c); // Compute (p^q) % c using optimized function
        printf("Result = %d\n", result);          // Print the result in required format
    }

    return 0; // Return 0 to indicate successful program execution
}
