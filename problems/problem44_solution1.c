// Solution to Problem 44 from "52 Programming Problems" by Tamim Shahriar Subeen
// Problem 44: Pascal's Triangle 1

#include <stdio.h>

void printPascalTriangle(int n)
{
    int ara[n + 1][n + 1]; // Ensure valid memory allocation

    for (int i = 0; i <= n; i++) // Loop must go up to n
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                ara[i][j] = 1; // First and last elements in row are 1
            else
                ara[i][j] = ara[i - 1][j - 1] + ara[i - 1][j]; // Sum of two above elements
        }
    }

    // Printing the triangle
    for (int i = 0; i <= n; i++) // Loop goes up to n
    {
        for (int j = 0; j <= i; j++)
        {
            if (j > 0)
                printf(" "); // Space between numbers
            printf("%d", ara[i][j]);
        }
        printf("\n"); // Newline after each row
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int test = 0; test < t; test++)
    {
        int n;
        scanf("%d", &n);
        if (test > 0)
            printf("\n"); // Print a newline between test cases, but not at the end
        printPascalTriangle(n);
    }

    return 0;
}
