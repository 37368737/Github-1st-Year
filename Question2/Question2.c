#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double diameter,radius,area, circumfrance;

    printf("Input the diameter of the table:");
    scanf("%lf", &diameter);

    radius = diameter/2;
    area = M_PI*pow(radius,2);
    circumfrance = 2*M_PI*radius;

    printf("\nThe diameter is: \t %.2lf", diameter);
    printf("\nThe radius is:\t\t %.2lf", radius);
    printf("\nThe area is: \t\t %.2lf", area);
    printf("\nThe circumfrance is: \t %.2lf", circumfrance);


    return 0;
}
