// Solution number 2 to Problem 7 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 7: Count Total Numbers.

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Process each test case
    {
        char line[10000];       // Adjusted size to handle larger lines of input
        scanf(" %[^\n]", line); // Read an entire line, including spaces

        int count = 0;          // Variable to keep track of the number of numbers
        int len = strlen(line); // Calculate the length of the current line

        for (int i = 0; i < len; i++) // Iterate over each character in the line
        {
            // Check if the current character is part of a number (handles negative numbers too)
            if ((line[i] >= '0' && line[i] <= '9') ||
                (line[i] == '-' && i + 1 < len && line[i + 1] >= '0' && line[i + 1] <= '9'))
            {
                // If it's the first character or follows a space, it indicates the start of a new number
                if (i == 0 || line[i - 1] == ' ')
                {
                    count++; // Increment count as a new number is found
                }
            }
        }
        printf("%d\n", count); // Output the count of numbers in the current line
    }
    return 0;
}
