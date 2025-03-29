// Solution to Problem 31 from "52 Programming Problems" by Tamim Shahriar Subeen
// Optimized approach using precomputed perfect numbers to avoid TLE

#include <stdio.h>

int main()
{
    // Precomputed perfect numbers (all perfect numbers ≤ 10^9)
    const int perfectNumbers[] = {6, 28, 496, 8128, 33550336};
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < 5; i++)
        {
            if (perfectNumbers[i] <= n)
            {
                printf("%d\n", perfectNumbers[i]);
            }
            else
            {
                break;
            }
        }
    }

    return 0;
}