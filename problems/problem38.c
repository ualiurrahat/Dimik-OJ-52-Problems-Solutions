// Solution to Problem 38 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 38: Print Diamond Shape

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through each test case
    {
        int n, m;
        scanf("%d %d", &n, &m); // Read values for diamond height (n) and number to print (m)

        // Print the upper half of the diamond
        for (int row = 1; row <= n; row++)
        {
            for (int col = 1; col <= row; col++)
            {
                if (row == col) // Avoid trailing space for the last number in the row
                {
                    printf("%d", m);
                }
                else
                {
                    printf("%d ", m);
                }
            }
            printf("\n"); // Move to the next line after each row
        }

        // Print the lower half of the diamond
        for (int row = n - 1; row >= 1; row--)
        {
            for (int col = 1; col <= row; col++)
            {
                if (col == row) // Avoid trailing space for the last number in the row
                {
                    printf("%d", m);
                }
                else
                {
                    printf("%d ", m);
                }
            }
            printf("\n"); // Move to the next line after each row
        }

        printf("\n"); // Print an extra newline between test cases
    }

    return 0;
}
