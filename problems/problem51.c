// Solution to Problem 51 from "52 Programming Problems" by Tamim Shahriar Subeen
// Problem 51: Find Substring 1

#include <stdio.h>
#include <string.h>

// same logic in easy way:
// for (int i = 0; i <= len1 - len2; i++)
// {
//     if (sub[0] == main[i])
//     {
//          int j;
//         for ( j = 1; j < len2; j++)
//         {
//             if (sub[j] != main[i + j])
//             {
//                 break;
//             }
//         }
//         if (j == len2)
//         {
//             printf("%d\n", i);
//             break;
//         }
//     }
// }
int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--)
    {
        char main[128], sub[128];
        scanf("%s %s", main, sub); // Read the two strings: main string and substring

        int len1 = strlen(main); // Length of the main string
        int len2 = strlen(sub);  // Length of the substring

        int st; // Variable to store starting index of the match
        for (int i = 0; i < len1; i++)
        {
            // Check if current character in main matches first character of substring
            if (main[i] == sub[0])
            {
                int count = 1; // Initialize match count
                st = i;        // Store the starting index
                int j = 0;     // Index for substring

                // Continue matching next characters
                while (main[++i] == sub[++j])
                {
                    count++; // Increase count of matched characters

                    // If full substring is matched
                    if (count == len2)
                    {
                        printf("%d\n", st); // Print the starting index
                        break;              // Exit the loop once match is found
                    }
                }
            }
        }
    }

    return 0;
}
