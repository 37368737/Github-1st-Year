#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double r, d, circ, surf;
    printf("Enter radius of circle: ");
    scanf("%lf", &r);

    d = r*2;
    circ = 2*M_PI*r;
    surf = M_PI*pow(r,2);

    printf("\nThe radius of the circle is:\t\t%.2lf", r);
    printf("\nThe diameter of the circle is:\t\t%.2lf", d);
    printf("\nThe circumference of the circle is:\t%.2lf", circ);
    printf("\nThe surface of the circle is:\t\t%.2lf\n\n", surf);
    return 0;
}
