// Solution to Problem 21 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 21: Print in reverse

#include <stdio.h>
#include <string.h>

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--)
    {
        char str[1001];   // Buffer to store the input string (max length 1000)
        scanf("%s", str); // Read a single word (without spaces) into str

        int len = strlen(str); // Get the length of the string

        // Loop to print the string in reverse order
        for (int i = len - 1; i >= 0; i--)
        {
            printf("%c", str[i]); // Print characters from the end to the beginning
        }
        printf("\n"); // Print a newline after each reversed string
    }

    return 0;
}
