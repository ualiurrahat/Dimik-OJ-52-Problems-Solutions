// Solution to Problem 5 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 6: Sum determination of first and last digit

#include <stdio.h>
#include <stdlib.h> // To use the atoi() function

int main()
{
    int t;           // Number of test cases
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through each test case
    {
        char str[6];       // Array to store a 5-character number as a string (plus null terminator)
        scanf("%5s", str); // Read the 5-character number as a string

        char firstChar = str[0]; // Extract the first character
        char lastChar = str[4];  // Extract the last character

        int firstDigit = firstChar - '0'; // Convert character to integer
        int lastDigit = lastChar - '0';   // Convert character to integer

        int sum = firstDigit + lastDigit; // Calculate the sum of first and last digit
        printf("Sum = %d\n", sum);        // Print the result
    }

    return 0; // Indicate successful execution
}
