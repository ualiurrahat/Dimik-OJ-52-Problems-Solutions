// Solution to Problem 32 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 32: Multipliers of X

#include <stdio.h>

int main()
{
    int t;           // Variable to store the number of test cases
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through each test case
    {
        int x, n;
        scanf("%d %d", &x, &n); // Read values for x (multiplier) and n (upper limit)

        // If x is greater than n, print "Invalid!"
        if (n < x)
        {
            printf("Invalid!\n");
        }
        else
        {
            // Print all multiples of x from x to n
            for (int i = x; i <= n; i += x)
            {
                printf("%d\n", i); // Print the current multiple of x
            }
        }
    }
    return 0;
}
