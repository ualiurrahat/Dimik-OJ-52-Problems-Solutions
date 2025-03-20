// Solution to Problem 11 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 11: Factorial

#include <stdio.h>

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) // Loop through each test case
    {
        int n; // Input number for which factorial is to be calculated
        scanf("%d", &n);

        long long fact = 1;          // Variable to store factorial result
        for (int i = 2; i <= n; i++) // Loop to calculate factorial
        {
            fact = fact * i;
        }
        printf("%lld\n", fact); // Output the factorial result
    }
    return 0;
}
