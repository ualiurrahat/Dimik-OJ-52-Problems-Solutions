// Solution to Problem 17 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 17: Count vowels

#include <stdio.h>
#include <string.h>

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) // Loop through each test case
    {
        char str[1001];        // Array to store input string (up to 1000 characters)
        scanf(" %[^\n]", str); // Read the entire line including spaces

        int count = 0;         // Variable to store the count of vowels
        int len = strlen(str); // Get the length of the string

        // Iterate through each character in the string
        for (int i = 0; i < len; i++)
        {
            // Check if the current character is a lowercase vowel
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                count++; // Increment vowel count
            }
        }

        printf("Number of vowels = %d\n", count); // Output the total vowel count
    }
    return 0;
}
