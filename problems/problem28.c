// Solution to Problem 27 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 28: Array sorted or not

#include <stdio.h>
#include <stdbool.h>

// Function to check if the given array is sorted in ascending or descending order
bool isSorted(int arr[], int n)
{
    bool flag = true; // Variable to track whether the array is sorted

    // Check for sorting in ascending order
    if (arr[0] < arr[1]) // If the first element is smaller than the second, assume ascending order
    {
        for (int i = 2; i < n; i++) // Iterate from the third element onwards
        {
            if (arr[i] < arr[i - 1]) // If a previous element is greater, it's not sorted
            {
                flag = false;
                break;
            }
        }
    }
    else
    {
        // Check for sorting in descending order
        for (int i = 2; i < n; i++) // Iterate from the third element onwards
        {
            if (arr[i] > arr[i - 1]) // If a previous element is smaller, it's not sorted
            {
                flag = false;
                break;
            }
        }
    }
    return flag; // Return whether the array is sorted or not
}

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) // Loop through each test case
    {
        int n; // Number of elements in the array
        scanf("%d", &n);

        int arr[n];                 // Declare an array of size n
        for (int i = 0; i < n; i++) // Read n elements into the array
        {
            scanf("%d", &arr[i]);
        }

        bool ans = isSorted(arr, n); // Check if the array is sorted

        printf(ans ? "YES\n" : "NO\n"); // Print "YES" if sorted, otherwise "NO"
    }

    return 0;
}
