// Solution to Problem 1 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 1: Even Odd 1
#include <stdio.h>

int main()
{
    int t;
    // Read the number of test cases
    scanf("%d", &t);

    while (t--) // Loop through each test case
    {
        int n;
        // Read the integer to check for even/odd
        scanf("%d", &n);

        // Check if the number is even or odd and print the result
        if (n % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0; // Indicate successful program termination
}
