// Solution to Problem 22 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 22: Prime Numbers in a range
#include <stdio.h>
#include <stdbool.h> // to use bool data type

// Function to check if a number is prime
bool isPrime(int n)
{
    if (n < 2)
    {
        return false; // Numbers less than 2 are not prime
    }
    if (n == 2)
    {
        return true; // 2 is the only even prime number
    }
    if (n % 2 == 0)
    {
        return false; // All other even numbers are not prime
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false; // If divisible by any number other than 1 and itself, not prime
        }
    }
    return true; // If no divisor found, it's prime
}

int main()
{
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--)
    {
        int start, end;
        scanf("%d %d", &start, &end);

        int count = 0; // To count prime numbers
        for (int i = start; i <= end; i++)
        {
            if (isPrime(i))
            {
                count++; // Increment count if i is prime
            }
        }

        printf("%d\n", count); // Print total prime count in range
    }

    return 0;
}
