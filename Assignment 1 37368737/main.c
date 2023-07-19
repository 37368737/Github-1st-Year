//WG Kotzee 37368737
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double rands, hours, rate;

    printf("\nEnter your weekly pay in Rands: ");
    scanf("%lf", &rands);
    printf("Enter the hours worked: ");
    scanf("%lf", &hours);

    rate = rands/hours;
    double num=rate;
    int num1=(int)num;
    double decimal= num -num1;
    decimal =decimal*100;
    printf("\nYour average hourly pay rate is %d Rands and %.0lf cents (R %.2lf)\n",num1, decimal,rate);

    return 0;
}
