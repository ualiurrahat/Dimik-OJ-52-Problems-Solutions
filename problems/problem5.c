// Solution to Problem 5 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 5: Square Pattern

#include <stdio.h>

int main()
{
    int t;           // Number of test cases
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through each test case
    {
        int n;           // Size of the square pattern
        scanf("%d", &n); // Read the value of n

        // Loop to print n rows
        for (int row = 0; row < n; row++)
        {
            // Loop to print n columns
            for (int col = 0; col < n; col++)
            {
                printf("*"); // Print asterisk without newline
            }
            printf("\n"); // Move to the next line after printing a row
        }
        printf("\n"); // Print an extra newline for spacing between test cases
    }

    return 0; // Indicate successful execution
}
