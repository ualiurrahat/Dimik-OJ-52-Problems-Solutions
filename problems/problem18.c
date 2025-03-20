// Solution to Problem 18 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 18: Print Vowels and Consonants

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

        int len = strlen(str); // Get the length of the string

        // Print vowels first
        for (int i = 0; i < len; i++)
        {
            // Check if the current character is a lowercase vowel
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                printf("%c", str[i]); // Print vowel
            }
        }
        printf("\n"); // Move to the next line after printing vowels

        // Print consonants
        for (int i = 0; i < len; i++)
        {
            // Check if the current character is not a vowel and not a space
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != ' ')
            {
                printf("%c", str[i]); // Print consonant
            }
        }
        printf("\n"); // Move to the next line after printing consonants
    }
    return 0;
}
