#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r, h, avg;
    int i, c;
    printf("Enter your weekly pay in Rands: ");
    scanf("%lf", &r);
    printf("Enter the hours worked: ");
    scanf("%lf", &h);

    avg = r/h;
    i = avg;
    c = (avg-i)*100;

    printf("\n\nYour average hourly pay rate is %d Rands and %d cents (R %.2lf)\n\n", i, c, avg);

    return 0;
}
