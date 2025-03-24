// Solution to Problem 20 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 20: Count words 2

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

        char *word = strtok(str, ",!;?. "); // Tokenize the string using the given delimiters
        int count = 0;                      // Initialize word count

        while (word != NULL)
        {
            if (strlen(word) > 0) // Check if the extracted token is a valid word
            {
                count++; // Increment the word count
            }
            word = strtok(NULL, ",!?;. "); // Get the next token
        }

        printf("Count = %d\n", count); // Output the total word count
    }

    return 0;
}
/*
    Explanation of how strtok() processes the input: "Hello, I'm Brooker and you're watching TV"

    1. First call: strtok(str, ",!?;. ")
       - It scans the string from the beginning and finds 'Hello'.
       - The comma (',') is a delimiter, so strtok() replaces ',' with '\0' and returns "Hello".
       - count = 1.

    2. Second call: strtok(NULL, ",!?;. ")
       - It continues from the position after "Hello," and finds "I'm".
       - Since the apostrophe (') is **not** a delimiter, "I'm" remains intact.
       - The space after "I'm" is a delimiter, so strtok() replaces it with '\0' and returns "I'm".
       - count = 2.

    3. Third call: strtok(NULL, ",!?;. ")
       - Finds "Brooker" and stops at the next space.
       - Returns "Brooker".
       - count = 3.

    4. Fourth call: strtok(NULL, ",!?;. ")
       - Finds "and" and stops at the next space.
       - Returns "and".
       - count = 4.

    5. Fifth call: strtok(NULL, ",!?;. ")
       - Finds "you're".
       - Since the apostrophe (') is not a delimiter, "you're" remains intact.
       - Returns "you're".
       - count = 5.

    6. Sixth call: strtok(NULL, ",!?;. ")
       - Finds "watching" and stops at the next space.
       - Returns "watching".
       - count = 6.

    7. Seventh call: strtok(NULL, ",!?;. ")
       - Finds "TV".
       - Returns "TV".
       - count = 7.

    8. Eighth call: strtok(NULL, ",!?;. ")
       - No more tokens found, strtok() returns NULL, and the loop ends.

    Final output:
    Count = 7
*/