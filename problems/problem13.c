/*
Author: MD. Ualiur Rahman Rahat

Problem Summary:
Tommy Mia believes in probability. Given a sentence with N words, some of which may repeat,
we need to compute the probability of randomly arranging those words to form the correct sentence.
That probability is:
    1 / (number of unique permutations)

Where:
    number of unique permutations = N! / (f1! * f2! * ... * fk!)
    where fi is the frequency of each unique word.
*/

#include <stdio.h>
#include <string.h>

// Define maximum number of words and word length
#define MAX_WORDS 11    // Max 10 words + 1 buffer
#define MAX_WORD_LEN 21 // Max 20 letters per word + 1 for '\0'

// Function to compute factorial of an integer
int factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i; // Multiply 1*2*3*...*n
    }
    return result;
}

// Function to compute greatest common divisor (used to reduce fractions)
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); // Euclidean algorithm
}

int main()
{
    int t;
    scanf("%d", &t); // Read number of test cases
    getchar();       // Consume the newline character left by scanf

    while (t--)
    {
        char str[220];                      // Stores the full input sentence
        char word[MAX_WORDS][MAX_WORD_LEN]; // 2D array to store each word separately
        int used[MAX_WORDS] = {0};          // Flag array to mark which words have been counted already
        int wordCount = 0;                  // Number of words found in the sentence

        fgets(str, sizeof(str), stdin); // Read the full sentence including spaces

        // Manual split of the sentence into words
        int i = 0, j = 0, k = 0;
        while (str[i] != '\0')
        {
            if (str[i] == ' ' || str[i] == '\n')
            {
                if (k > 0)
                {
                    word[wordCount][k] = '\0'; // Null-terminate current word
                    wordCount++;               // Move to next word
                    k = 0;                     // Reset character index for next word
                }
            }
            else
            {
                word[wordCount][k++] = str[i]; // Copy character into current word
            }
            i++;
        }
        // After loop ends, check if the last word needs to be added
        if (k > 0)
        {
            word[wordCount][k] = '\0';
            wordCount++;
        }

        // Step 1: Calculate denominator based on repeated words
        int denominator = 1;
        for (i = 0; i < wordCount; i++)
        {
            if (used[i])
                continue; // Skip if already counted this word

            int count = 1; // Count occurrences of word[i]
            for (j = i + 1; j < wordCount; j++)
            {
                if (!used[j] && strcmp(word[i], word[j]) == 0)
                {
                    used[j] = 1; // Mark duplicate word as used
                    count++;
                }
            }
            denominator *= factorial(count); // Multiply denominator by count!
        }

        // Step 2: Calculate total permutations of N words
        int total = factorial(wordCount);            // Total permutations = N!
        int final_denominator = total / denominator; // Remove repetition by dividing

        // Step 3: Reduce the fraction 1/final_denominator
        int numerator = 1;
        int common = gcd(numerator, final_denominator); // Reduce 1/X (though 1/gcd = 1 always)
        numerator /= common;
        final_denominator /= common;

        // Step 4: Print the reduced fraction
        printf("%d/%d\n", numerator, final_denominator);
    }

    return 0;
}
