// Solution to Problem 2 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 2: Even Odd 2
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    // Read the number of test cases
    scanf("%d", &t);

    while (t--) // Loop through each test case
    {
        char n[101]; // Array to store the input number as a string (up to 100 digits)

        // Read the input number as a string (to handle large numbers)
        scanf(" %[^\n]", n);

        // Determine the length of the input string
        int length = strlen(n);

        // Get the last character of the string
        int lastChar = n[length - 1];

        // Convert the last character to an integer digit
        int lastDigit = lastChar - '0';

        // Check if the last digit is even or odd and print the result
        if (lastDigit % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0; // Indicate successful program termination
}
