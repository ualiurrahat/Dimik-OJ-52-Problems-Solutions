// Solution to Problem 7 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 9: Whole Square Numbers
#include <stdio.h>
#include <math.h> // to use sqrt() function

int main()
{
    int t;           // Declare variable for number of test cases
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through all test cases
    {
        int n;           // Declare variable for input number
        scanf("%d", &n); // Read the input number

        int sqrtNumber = sqrt(n);         // Calculate the square root of the number
        if (sqrtNumber * sqrtNumber == n) // Check if the square of the square root equals the original number
        {
            printf("YES\n"); // If it is a perfect square, print YES
        }
        else
        {
            printf("NO\n"); // Otherwise, print NO
        }
    }
    return 0; // Return 0 to indicate successful execution
}
