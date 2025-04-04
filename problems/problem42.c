// Solution to Problem 42 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 42: Sum of Sequence 3

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop for each test case
    {
        int n;
        scanf("%d", &n); // Read the value of n

        if (n == 1) // Special case when n is 1
        {
            printf("2 + 1\n"); // Output the sequence for n = 1
        }
        else if (n == 0) // Special case when n is 0
        {
            printf("1\n"); // Output the sequence for n = 0
        }
        else // General case for n >= 2
        {
            for (int i = n; i >= 2; i--) // Loop to print terms from 2^n to 2^2
            {
                printf("2^%d + ", i); // Print the term in the required format
            }
            printf("2 + 1\n"); // Print the last terms: "2 + 1"
        }
    }
    return 0; // Indicate successful execution
}
