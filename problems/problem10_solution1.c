// Solution to Problem 10 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 10: Run Rate 1
#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t); // Read the number of test cases

    for (i = 0; i < t; i++)
    {
        int totalRun, presentRun, ballLeft;
        scanf("%d %d %d", &totalRun, &presentRun, &ballLeft);

        // Calculate current run rate:
        // Total balls in ODI = 300. So balls played = 300 - ballLeft.
        // Run rate formula: (runs / overs) => (runs / balls) * 6
        double runRate = (presentRun / (double)(300 - ballLeft)) * 6.0;

        // Runs required to win = opponent's score - current score + 1
        double need = (totalRun - presentRun + 1) * 1.0;

        // Required run rate = (required runs / balls left) * 6
        double requiredRate = (need / (double)ballLeft) * 6.0;

        // If already ahead of opponent's score, no required run rate
        if (presentRun > totalRun)
        {
            requiredRate = 0.0;
        }

        // Print both run rates with precision up to two decimal points
        printf("%.2lf %.2lf\n", runRate, requiredRate);
    }

    return 0;
}
