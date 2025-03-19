#include <stdio.h>

int main()
{
    int t, i, r1, r2, b, ballPlayed;   // Declare variables for test cases, runs, balls, and ball played
    double currRunRate, askingRunRate; // Declare variables for current run rate and asking run rate
    scanf("%d", &t);                   // Read number of test cases

    while (t--) // Loop through each test case
    {
        scanf("%d %d %d", &r1, &r2, &b); // Read the total runs (r1), current runs (r2), and balls left (b)
        ballPlayed = 300 - b;            // Calculate the balls played (total balls - balls left)

        if (b == 0) // Avoid division by zero if no balls are left
        {
            printf("0.00 0.00\n"); // Print "0.00 0.00" if no balls are left
            continue;              // Skip the rest of the loop and proceed to the next test case
        }

        // Calculate current run rate
        currRunRate = (1.0 * r2 / ballPlayed) * 6; // (current runs / balls played) * 6 to get the run rate per over

        // Calculate asking run rate (runs required to win / balls left)
        askingRunRate = (1.0 * (r1 - r2 + 1) / b) * 6; // (runs required to win / balls left) * 6 to get the run rate per over

        printf("%.2lf %.2lf\n", currRunRate, askingRunRate); // Print the current and asking run rates with 2 decimal precision
    }
    return 0; // Return 0 to indicate successful execution
}
