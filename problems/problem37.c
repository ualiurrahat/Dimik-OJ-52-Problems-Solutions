// Solution to Problem 37 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 37: Rearrange digits of a number in reverse order (Reverse number).

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--)
    { // Process each test case
        long long num;
        scanf("%lld", &num); // Read the number for which we need to reverse the digits

        long long rev = 0; // Variable to store the reversed number

        while (num)
        {                             // Loop while the number is not zero
            long long rem = num % 10; // Get the last digit of the number
            rev = rev * 10 + rem;     // Add the last digit to the reversed number
            num = num / 10;           // Remove the last digit from the number
        }

        printf("%lld\n", rev); // Print the reversed number
    }

    return 0; // Return 0 indicating successful execution
}
