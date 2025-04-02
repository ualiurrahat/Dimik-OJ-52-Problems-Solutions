// Solution to Problem 39 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 39: Find Palindrome

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) // Loop through each test case
    {
        char str[1001];
        scanf("%s", str);

        int len = strlen(str);
        for (int i = 0; i < len / 2; i++) // Check for palindrome
        {
            if (str[i] != str[len - i - 1]) // If mismatch found
            {
                printf("Sorry! It is not palindrome!\n");
                goto next_test_case; // Jump to the next_test_case label
            }
        }
        printf("Yes! It is palindrome!\n"); // If loop completes, it's a palindrome

    next_test_case:; // Label where control jumps if a mismatch is found
    }
    return 0;
}
