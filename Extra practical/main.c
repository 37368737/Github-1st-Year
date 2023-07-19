#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double circumfrance, area, radius;
    int diameter;
    printf("Input the diameter of the table:");
    scanf("%d",&diameter);
    circumfrance = M_PI*diameter;
    radius = diameter/2;
    area = M_PI*pow(radius,2);
    printf("\n\nThe circumfrance is %.2lf",circumfrance);
    printf("\nThe area is %.2lf\n\n",area);
    return 0;
}
