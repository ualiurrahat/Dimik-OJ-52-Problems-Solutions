// Solution to Problem 46 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 46: Area of a Triangle

#include <stdio.h>
#include <math.h>

int main()
{
    int t;           // Number of test cases
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through each test case
    {
        int a, b, c;                   // Variables to store the three sides of the triangle
        scanf("%d %d %d", &a, &b, &c); // Read the three sides

        // Calculate the semi-perimeter using Heron's formula
        double s = (double)(a + b + c) / 2;

        // Compute the area using Heron's formula: sqrt(s * (s - a) * (s - b) * (s - c))
        double formula = s * (s - a) * (s - b) * (s - c);
        double area = sqrt(formula); // Take the square root to get the area

        // Print the area with 3 decimal places
        printf("Area = %.3lf\n", area);
    }

    return 0; // Indicate successful program termination
}
