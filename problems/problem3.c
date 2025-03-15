// Solution to Problem 3 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 3: Descending Numbers
#include <stdio.h>

int main()
{
    int i;
    int count = 0; // Counter to track how many numbers have been printed in the current row

    for (i = 1000; i >= 1; i--)
    {
        printf("%d\t", i); // Print the number followed by a tab

        count++; // Increment the counter

        // After printing 5 numbers, move to the next line
        if (count == 5 && i != 1)
        {
            printf("\n"); // Print a newline
            count = 0;    // Reset counter for the next row
        }
    }

    return 0;
}
