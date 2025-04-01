// Solution to Problem 35 from "52 Programming Problems" by Tamim Shahriar Subeen
// This problem is from Dimik OJ and is commonly solved using C.
// Problem 35: Coordinates of a Circle

#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--)
    {
        int x1, y1; // Coordinates of the center of the circle
        scanf("%d %d", &x1, &y1);

        int r; // Radius of the circle
        scanf("%d", &r);

        int x2, y2; // Coordinates of the given point
        scanf("%d %d", &x2, &y2);

        // Calculate the Euclidean distance between the given point (x2, y2) and the circle's center (x1, y1)
        double dist = sqrt((double)((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));

        // Determine whether the point lies inside or outside the circle
        if ((int)dist <= r)
        {
            printf("The point is inside the circle\n");
        }
        else
        {
            printf("The point is not inside the circle\n");
        }
    }

    return 0;
}
