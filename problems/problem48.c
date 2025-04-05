// Solution to Problem 48 from "52 Programming Problems" by Tamim Shahriar Subeen
// Problem 48: find missing number

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through each test case
    {
        int n;
        scanf("%d", &n); // Read the size of the original array (including the missing number)

        int arr[n]; // Declare an array to store the input numbers
        for (int i = 0; i < n - 1; i++)
        {
            scanf("%d", &arr[i]); // Read n-1 numbers into the array
        }

        int check[n + 1]; // Declare an array to track the presence of numbers (index-based checking)
        check[0] = 0;     // Initialize index 0 (not needed, but included for safety)

        // Mark the presence of numbers in the check array
        for (int i = 0; i < n - 1; i++)
        {
            check[arr[i]] = arr[i]; // Assign the value at its corresponding index
        }

        // Identify the missing number by checking which index is unmarked
        for (int i = 1; i <= n; i++)
        {
            if (check[i] != i) // If the index doesn't match its assigned value, it's missing
            {
                printf("%d\n", i); // Print the missing number
                break;
            }
        }
    }
    return 0;
}
