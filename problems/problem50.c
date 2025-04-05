// Solution to Problem 50 from "52 Programming Problems" by Tamim Shahriar Subeen
// Problem 50: String Left Right Bit Problem

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--)
    {
        char str[51];     // String to hold up to 50 characters (plus null terminator)
        scanf("%s", str); // Read the input string

        int len = strlen(str); // Get the length of the string

        // Iterate through the string from index 1 to len - 2
        for (int i = 1; i < len - 1; i++)
        {
            // If the character is 'L', replace it with the previous character
            if (str[i] == 'L')
            {
                str[i] = str[i - 1];
            }
            // If the character is 'R', replace it with the next character
            else if (str[i] == 'R')
            {
                str[i] = str[i + 1];
            }
        }

        // Print the modified string
        printf("%s\n", str);
    }

    return 0;
}
