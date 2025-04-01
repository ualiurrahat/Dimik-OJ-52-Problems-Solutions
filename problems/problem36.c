// Solution to Problem 36 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 36: Rearrange words alphabetically.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--)
    { // Process each test case
        int n;
        scanf("%d", &n); // Read the number of strings in this test case

        char str[n][10001]; // Declare an array of strings with a maximum length of 10000 characters (plus 1 for null terminator)
        getchar();          // To clear the newline character from the input buffer after reading the integer 'n'

        // Read each string from the input
        for (int i = 0; i < n; i++)
        {
            gets(str[i]); // Read a string using gets() (unsafe, but as per the current code)
        }

        // Sort the strings alphabetically using bubble sort and strcmp
        for (int i = 0; i < n; i++)
        { // Outer loop for each string
            for (int j = i; j < n; j++)
            { // Inner loop to compare strings
                if (strcmp(str[i], str[j]) > 0)
                {                           // If string i is greater than string j alphabetically
                    char temp[10001];       // Temporary buffer for swapping strings
                    strcpy(temp, str[i]);   // Copy string i to temporary buffer
                    strcpy(str[i], str[j]); // Copy string j to string i
                    strcpy(str[j], temp);   // Copy string i (from temp) to string j
                }
            }
        }

        // Print the sorted strings
        for (int i = 0; i < n; i++)
        {
            printf("%s\n", str[i]); // Print each sorted string
        }
    }

    return 0; // Return 0 indicating successful execution
}
