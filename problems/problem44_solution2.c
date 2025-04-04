// Optimized Solution to Problem 44 from "52 Programming Problems" by Tamim Shahriar Subeen
// Problem 44: Pascal's Triangle 1

#include <stdio.h>

void printPascalTriangle(int n)
{
    for (int i = 0; i <= n; i++) // Iterating through rows
    {
        int value = 1;               // First element in each row is always 1
        for (int j = 0; j <= i; j++) // Iterating through columns
        {
            if (j > 0)
                printf(" "); // Ensuring correct spacing

            printf("%d", value);

            // Compute next value in the row using C(n, k) = C(n, k-1) * (i-k+1) / k
            value = value * (i - j) / (j + 1);
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
            printf("\n"); // Ensuring correct formatting
        printPascalTriangle(n);
    }

    return 0;
}
