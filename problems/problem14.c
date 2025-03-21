// Solution to Problem 14 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 14: Count total occurrences of a character.

#include <stdio.h>  // Standard input/output library for scanf and printf
#include <string.h> // String handling library for strlen

int main()
{
    int t;           // Variable to store the number of test cases
    scanf("%d", &t); // Read the number of test cases from user input

    // Loop through each test case
    while (t--)
    {
        char str[10001]; // Character array to store the input string (max size 10000 + 1 for null terminator)
        char ch;         // Variable to store the character to search for

        // Read the input string, skipping leading whitespace and stopping at newline
        // %[^\n] captures everything except newline into str
        scanf(" %[^\n]", str);

        // Read a single character, with leading space to skip any leftover whitespace (e.g., newline)
        scanf(" %c", &ch);

        // Calculate the length of the input string
        int len = strlen(str);

        int count = 0; // Counter for occurrences of the character 'ch' in 'str'

        // Iterate through each character in the string
        for (int i = 0; i < len; i++)
        {
            // If current character matches the target character, increment count
            if (ch == str[i])
            {
                count++;
            }
        }

        // Check if the character was found in the string
        if (count == 0)
        {
            // If no occurrences, print that the character is not present
            printf("'%c' is not present\n", ch);
        }
        else
        {
            // If found, print the character, the string, and the number of occurrences
            printf("Occurrence of '%c' in '%s' = %d\n", ch, str, count);
        }
    }

    return 0; // Indicate successful program completion
}