//WG Kotzee 37368737
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double find_Diameter(double rad);
double find_Circumference(double rad);
double find_Area( double rad);

int main()
{
    printf("Practical 7: Functions\n\n");

    int rad;
    double diameter, circ, area;
    printf("Enter radius of circle: ");
    scanf("%d",&rad);

    diameter = find_Diameter(rad);
    circ = find_Circumference(rad);
    area = find_Area(rad);

    printf("\nDiameter of the circle = %.2lf\n",diameter);
    printf("\nCircumference of the circle = %.2lf\n",circ);
    printf("\nArea of the circle = %.2lf\n",area);

    return 0;
}
    double find_Diameter(double rad){
        return rad*2;
    }
    double find_Circumference(double rad){
        return 2*rad*M_PI;
    }
    double find_Area(double rad){
        return pow(rad,2)*M_PI;
    }
