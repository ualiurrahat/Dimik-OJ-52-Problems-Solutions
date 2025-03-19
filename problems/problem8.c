// Solution to Problem 8 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and requires sorting three numbers in ascending order.
// The approach uses simple comparison and swapping without any sorting function.

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    for (int i = 0; i < t; i++)
    {
        int n1, n2, n3;
        scanf("%d %d %d", &n1, &n2, &n3); // Read three integers

        int temp; // Temporary variable for swapping

        // Step 1: Ensure n1 is the smallest of the first two
        if (n1 > n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }

        // Step 2: Ensure n2 is the smallest of the last two
        if (n2 > n3)
        {
            temp = n2;
            n2 = n3;
            n3 = temp;
        }

        // Step 3: Recheck n1 and n2 in case the second swap disturbed order
        if (n1 > n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }

        // Print the sorted numbers with the test case index
        printf("Case %d: %d %d %d\n", i + 1, n1, n2, n3);
    }

    return 0;
}
