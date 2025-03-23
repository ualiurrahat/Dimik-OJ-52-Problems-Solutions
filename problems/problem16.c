#include <stdio.h>
#include <string.h>

// Function to reverse a given word in place.
void reverseWord(char str[])
{
    int len = strlen(str);            // Get the length of the word
    for (int i = 0; i < len / 2; i++) // Traverse the string from both ends towards the middle
    {
        char ch = str[i];          // Store the character at the starting position
        str[i] = str[len - i - 1]; // Swap with the character at the end
        str[len - i - 1] = ch;     // Swap the characters
    }
}

int main()
{
    int t;           // Variable to store the number of test cases
    scanf("%d", &t); // Read the number of test cases from the input

    // Process each test case
    while (t--)
    {
        char str[1001];        // Array to store the input sentence (allowing for spaces)
        scanf(" %[^\n]", str); // Read a line of input, including spaces until the newline is encountered

        int len = strlen(str); // Get the length of the input string

        char word[1000]; // Array to store individual words
        int j = 0;       // Index to keep track of the current position in the word array

        // Loop through each character in the string
        for (int i = 0; i <= len; i++)
        {
            // Check if the character is a space or end of the string (denoted by '\0')
            if (str[i] == ' ' || str[i] == '\0')
            {
                word[j] = '\0';     // Null-terminate the current word to prepare for reversal
                reverseWord(word);  // Reverse the word in place
                printf("%s", word); // Print the reversed word

                // If the character is a space, print a space after the word
                if (str[i] == ' ')
                {
                    printf(" ");
                }
                j = 0; // Reset the index for the next word
            }
            else
            {
                // If the character is part of a word, add it to the current word
                word[j++] = str[i]; // Increment the index for the next character in the word
            }
        }

        // Print a newline after processing each test case
        printf("\n");
    }

    return 0; // Return 0 to indicate successful execution
}
