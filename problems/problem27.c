// Solution to Problem 27 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 27: Armstrong Number

#include <stdio.h>

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);
    while (t--) // Loop through each test case
    {
        int n; // Input number to check if it is an Armstrong number
        scanf("%d", &n);

        int res = 0;  // Variable to store the sum of cubes of digits
        int temp = n; // Temporary variable to process the number

        // Extract digits and calculate the sum of cubes
        while (temp)
        {
            int digit = temp % 10;             // Get the last digit
            temp = temp / 10;                  // Remove the last digit
            res = res + digit * digit * digit; // Add the cube of the digit to res
        }

        // Check if the computed sum matches the original number
        if (n == res)
        {
            printf("%d is an armstrong number!\n", n);
        }
        else
        {
            printf("%d is not an armstrong number!\n", n);
        }
    }

    return 0;
}
