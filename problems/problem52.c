// Solution to Problem 52 from "52 Programming Problems" by Tamim Shahriar Subeen
// Problem 52: Find Substring 2

#include <stdio.h>
#include <string.h>

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

        int count = 0;
        for (int i = 0; i <= len1 - len2; i++)
        {
            if (sub[0] == main[i])
            {
                int j;
                for (j = 1; j < len2; j++)
                {
                    if (sub[j] != main[i + j])
                    {
                        break;
                    }
                }
                if (j == len2)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
