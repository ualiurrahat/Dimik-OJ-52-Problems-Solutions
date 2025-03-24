// Solution to Problem 19 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 19: Count words 1

#include <stdio.h>
#include <string.h>

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--)
    {
        char str[10001];       // Buffer to store the input string (max length 10000)
        scanf(" %[^\n]", str); // Read the full line including spaces

        int len = strlen(str); // Get the length of the input string
        int count = 0;         // Initialize word count

        for (int i = 0; i < len; i++)
        {
            // A space indicates the end of a word, increment word count
            if (str[i] == ' ')
            {
                count++;
            }
        }

        count++;                       // Add 1 to include the last word
        printf("Count = %d\n", count); // Output the word count
    }

    return 0;
}
