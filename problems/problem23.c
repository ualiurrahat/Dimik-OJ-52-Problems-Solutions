// Solution to Problem 23 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 23: Letter To Number

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through each test case
    {
        char str[101];
        scanf(" %[^\n]", str); // Read a line of input including spaces

        int len = strlen(str); // Get the length of the input string

        for (int i = 0; i < len; i++) // Iterate through each character in the string
        {
            printf("%d", str[i] - 64); // Convert character to the corresponding number
        }
        printf("\n"); // Print a newline after processing each string
    }
    return 0; // Indicate successful program termination
}
