// Solution to Problem 33 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 33: Divisible 1
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through each test case
    {
        int start, end, div;
        scanf("%d %d %d", &start, &end, &div); // Read the range [start, end] and the divisor

        // Compute the first number in the range that is divisible by 'div'
        // If 'start' is already divisible by 'div', use it. Otherwise, move to the next multiple.
        int firstDivisible = start + (div - start % div) % div;

        // If the first divisible number exceeds 'end', there are no valid numbers to print.
        if (firstDivisible > end)
        {
            printf("\n"); // Print a blank line as per problem constraints (if required)
            continue;     // Move to the next test case
        }

        // Print all numbers that are divisible by 'div' within the range [start, end]
        for (int i = firstDivisible; i <= end; i += div)
        {
            printf("%d\n", i);
        }
    }
    return 0; // Indicate successful execution
}
