// Solution to Problem 7 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 10: Run Rate 1
#include <stdio.h>

int main()
{
    int t;           // Declare variable for number of test cases
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through all test cases
    {
        int totalRun, currentRun, ballsLeft;                   // Declare variables for total runs, current runs, and balls left
        scanf("%d %d %d", &totalRun, &currentRun, &ballsLeft); // Read the values for total runs, current runs, and balls left

        // Calculate balls played and overs played
        int ballsPlayed = 300 - ballsLeft;                     // Calculate balls played
        double oversPlayed = (1.0 * ballsPlayed) / 6;          // Convert balls played to overs
        double currRunRate = (1.0 * currentRun) / oversPlayed; // Calculate the current run rate

        // Calculate required run rate
        int requiredRun = totalRun - currentRun + 1;              // Calculate required runs to win
        double oversleft = (1.0 * ballsLeft) / 6;                 // Convert balls left to overs
        double requiredRunRate = (1.0 * requiredRun) / oversleft; // Calculate the required run rate

        // Print the current and required run rates
        printf("%.2lf %.2lf\n", currRunRate, requiredRunRate);
    }
    return 0; // Return 0 to indicate successful execution
}
