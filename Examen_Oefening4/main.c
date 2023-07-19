#include <stdio.h>
#include <stdlib.h>

int main()
{
    double w, h, bmi;

    printf("BMI Calculator\n\n");
    printf("Enter weight in Kilograms: ");
    scanf("%lf", &w);
    printf("\nEnter height in meters: ");
    scanf("%lf", &h);
    bmi = w/pow(h,2);
    printf("\n\n Weight:\t%.4lf kg\n", w);
    printf(" Height:\t%.4lf m\n", h);
    printf(" BMI: \t\t%.4lf\n", bmi);
    if ( bmi>=30){
        printf(" Status:\tObese\n");
    }
    else if ( bmi<30 && bmi>=25){
        printf(" Status:\tOverweight\n");
    }
    else if ( bmi<25 && bmi>=18.5){
        printf(" Status:\tNormal\n");
    }
    else {
        printf(" Status:\tUnderweight\n");
    }
    return 0;
}
