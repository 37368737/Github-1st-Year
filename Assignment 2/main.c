#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double radius, diameter, circumfrance, surface;
    printf("********** Assignment 2 **********");

    printf("\n\nEnter the radius of the circle: ");
    scanf("%lf", &radius);

    diameter = radius*2;
    circumfrance = 2*M_PI*radius;
    surface = M_PI*pow(radius,2);

    printf("\nThe radius of the circle is: \t\t%.2lf", radius);
    printf("\nThe diameter of the circle is:\t\t%.2lf", diameter);
    printf("\nThe circumfrance of the circle is: \t%.2lf", circumfrance);
    printf("\nThe surface of the circle is: \t\t%.2lf\n\n", surface);

    return 0;
}
