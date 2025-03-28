// Solution to Problem 26 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 26: Alien Goopie

#include <stdio.h>

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);
    while (t--) // Loop through each test case
    {
        double x; // Initial size of the alien Goopie
        scanf("%lf", &x);
        int count = 0; // Variable to store the number of days

        // Keep dividing x by 2 until it becomes 1 or less
        while (x > 1)
        {
            x = x / 2;
            count++;
        }

        // Print the number of days required
        printf("%d days\n", count);
    }
    return 0;
}
