// Solution to Problem 25 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 25: LCM

#include <stdio.h>

// Function to calculate GCD using the Euclidean algorithm
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t;
    scanf("%d", &t); // Read number of test cases

    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b); // Read two numbers

        if (a == 0 || b == 0) // If any number is 0, LCM is 0
        {
            printf("LCM = 0\n");
            continue; // Move to the next test case instead of exiting
        }

        int gcd = findGCD(a, b);
        long long int mul = (long long int)a * b; // Prevent integer overflow
        long long int lcm = mul / gcd;            // LCM formula: LCM(a, b) = (a * b) / GCD(a, b)

        printf("LCM = %lld\n", lcm); // Ensure correct formatting
    }

    return 0;
}
