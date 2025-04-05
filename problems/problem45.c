// Solution to Problem 45 from "52 Programming Problems" by Tamim Shahriar Subeen
// Problem 45: Pascal's Triangle 2

#include <stdio.h>

long long pascal[51][51];

void preComputePascal()
{
    for (int i = 0; i <= 50; i++)
    {
        pascal[i][0] = 1;            // First element in each row is always 1
        for (int j = 1; j <= i; j++) // FIX: Start from j = 1
        {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }
}

void printPascalTriangle(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%lld", pascal[i][j]);
            if (j < i) // FIX: Space should be printed for all except last element
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int t, n;
    preComputePascal();
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        printPascalTriangle(n);
        if (t > 0) // Print blank line between test cases except the last one
        {
            printf("\n");
        }
    }
    return 0;
}
