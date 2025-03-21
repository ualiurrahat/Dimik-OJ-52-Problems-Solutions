// Solution to Problem 15 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 15: Count total occurrences of all lowercase alphabetic characters.

#include <stdio.h>  // Standard input/output library for scanf and printf
#include <string.h> // String handling library for strlen

int main()
{
    int t;           // Variable to store the number of test cases
    scanf("%d", &t); // Read the number of test cases from user input

    // Loop through each test case
    while (t--)
    {
        char str[1001]; // Character array to store the input string (max size 1000 + 1 for null terminator)

        // Read the input string, skipping leading whitespace and stopping at newline
        // %[^\n] captures everything except newline into str
        scanf(" %[^\n]", str);

        int len = strlen(str); // Calculate the length of the input string

        int arr[26]; // Array to store the count of each lowercase letter (a-z)

        // Initialize all elements of arr to 0 (one for each letter a-z)
        for (int i = 0; i < 26; i++)
        {
            arr[i] = 0;
        }

        // Count occurrences of each lowercase letter in the string
        // Assumes input contains only lowercase letters a-z
        for (int i = 0; i < len; i++)
        {
            arr[str[i] - 'a']++; // Increment count for the corresponding letter
                                 // 'a' - 'a' = 0, 'b' - 'a' = 1, etc.
        }

        // Print the count of each letter that appears at least once
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] != 0) // Only print letters with non-zero occurrences
            {
                printf("%c = %d\n", 'a' + i, arr[i]); // Convert index back to character and print count
            }
        }

        printf("\n"); // Print a blank line after each test case for readability
    }

    return 0; // Indicate successful program completion
}