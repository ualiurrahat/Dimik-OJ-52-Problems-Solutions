// Solution to Problem 47 from "52 Programming Problems" by Tamim Shahriar Subeen
// Problem 47: Merge and sort array

#include <stdio.h>

// Function to merge two sorted arrays into a single sorted array
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0; // Initialize pointers for arr1, arr2, and arr3

    // Merge elements from both arrays while both have remaining elements
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i]; // Copy element from arr1 if it's smaller
            i++;
        }
        else
        {
            arr3[k] = arr2[j]; // Copy element from arr2 if it's smaller or equal
            j++;
        }
        k++; // Move to the next position in arr3
    }

    // Copy remaining elements of arr1 (if any)
    while (i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2 (if any)
    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n); // Read size of first array
        int arr1[n];     // Declare first array

        // Read elements of the first array
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }

        int m;
        scanf("%d", &m); // Read size of second array
        int arr2[m];     // Declare second array

        // Read elements of the second array
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr2[i]);
        }

        int arr3[n + m]; // Declare merged array of size (n + m)

        // Merge both sorted arrays
        merge(arr1, n, arr2, m, arr3);

        // Print the merged sorted array
        for (int i = 0; i < n + m - 1; i++)
        {
            printf("%d ", arr3[i]);
        }
        printf("%d\n", arr3[n + m - 1]); // Print last element without trailing space
    }
    return 0;
}
