// Solution to Problem 24 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 24: Alternate Elements

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) // Loop through each test case
    {
        int n;
        scanf("%d", &n); // Read the number of elements in the array

        int arr[n]; // Declare an array of size 'n'
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]); // Read the array elements
        }

        printf("%d", arr[0]); // Print the first element without a leading space

        // Iterate through alternate elements starting from index 2
        for (int i = 2; i < n; i = i + 2)
        {
            printf(" %d", arr[i]); // Print elements with a leading space for correct formatting
        }

        printf("\n"); // Print a newline at the end of each test case output
    }

    return 0; // Return 0 to indicate successful execution
}
