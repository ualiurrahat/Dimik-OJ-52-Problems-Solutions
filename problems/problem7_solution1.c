// Solution to Problem 7 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 7: Count Total Numbers.

#include <stdio.h>
#include <stdlib.h> // Required for strtol() function

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char line[10000]; // Buffer to store the input line
        char *p, *e;      // Pointers used for parsing numbers
        p = line;
        int count = 0; // Counter for numbers found in the line
        long input;

        // Read the entire line, including spaces
        scanf(" %[^\n]", line);

        // Process the line to count numbers
        for (p = line;; p = e)
        {
            input = strtol(p, &e, 10); // Convert string to long integer

            if (p == e) // No valid number found, exit loop
            {
                break;
            }
            count++; // Increment count for each valid number found
        }
        printf("%d\n", count);
    }
    return 0;
}

/*
Example Execution:
-----------------
Input:
3
12 45 78
100   200    300
7  8 9 10

Step-by-step execution for "12 45 78":
---------------------------------------------------
Initial string: "12 45 78"

1st Iteration:
- p = "12 45 78"
- strtol() extracts 12 and sets e to the space after 12
- p != e, so count = 1
- p is updated to e (now points to ' ')

2nd Iteration:
- p = " 45 78" (points to space before 45)
- strtol() skips spaces, extracts 45, e points to space after 45
- p != e, so count = 2
- p is updated to e (now points to ' ')

3rd Iteration:
- p = " 78" (points to space before 78)
- strtol() skips spaces, extracts 78, e points to '\0' (end of string)
- p != e, so count = 3
- p is updated to e (now points to '\0')

4th Iteration:
- p = "\0"
- strtol() does nothing (p == e)
- Loop terminates.

Output: 3
---------------------------------------------------
This method efficiently counts numbers in a line regardless of spacing.
*/
