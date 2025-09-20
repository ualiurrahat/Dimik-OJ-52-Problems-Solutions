// Second Solution to Problem 10 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 10: Run Rate 1

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read number of test cases

    while (t--)
    {
        int r1, r2, b; // r1 = opponent's total runs, r2 = current team runs, b = balls remaining
        scanf("%d %d %d", &r1, &r2, &b);

        int ballPlayed = 300 - b; // In an ODI, total balls = 50 overs * 6 = 300

        // Initialize current run rate to 0.0
        double currRunRate = 0.0;
        // Only calculate if some balls have been played
        if (ballPlayed > 0)
            currRunRate = (1.0 * r2 / ballPlayed) * 6.0;

        // Calculate the required number of runs to win
        double requiredRun = r1 - r2 + 1;

        // Initialize asking run rate to 0.0
        double askingRunRate = 0.0;
        // If the match is not already won and there are balls left
        if (b > 0 && r2 <= r1)
            askingRunRate = (requiredRun / b) * 6.0;

        // If the team has already passed opponent's score, no run rate needed
        if (r2 > r1)
            askingRunRate = 0.0;

        // Print current and required run rate with 2 decimal precision
        printf("%.2lf %.2lf\n", currRunRate, askingRunRate);
    }

    return 0;
}
