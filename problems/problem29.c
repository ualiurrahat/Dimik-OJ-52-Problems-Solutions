// Solution to Problem 29 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 29: Detect Sign

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char ch;
        scanf(" %c", &ch);

        // check for uppercase
        if (ch >= 'A' && ch <= 'Z')
        {
            printf("Uppercase Character\n");
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            printf("Lowercase Character\n");
        }
        else if (ch >= '0' && ch <= '9')
        {
            printf("Numerical Digit\n");
        }
        else
        {
            printf("Special Character\n");
        }
    }
    return 0;
}