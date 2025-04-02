// Solution to Problem 40 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 40: Sum of Sequence 1

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through each test case
    {
        int x, k;
        scanf("%d %d", &x, &k); // Read values for base (x) and exponent limit (k)

        int power = 1, sum = 1; // Initialize power as x^0 (1) and sum as 1 (first term)

        // Compute the sum of the sequence: 1 + x + x^2 + ... + x^k
        for (int i = 1; i <= k; i++)
        {
            power = power * x; // Compute x^i iteratively
            sum = sum + power; // Add the computed power to the sum
        }

        printf("Result = %d\n", sum); // Print the final result
    }

    return 0;
}
