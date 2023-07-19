//W.G. Kotzee 37368737
#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("BMI Calculator\n\n");

  double weight, height, BMI;

  printf("Enter weight in kilograms: ");
  scanf("%lf", &weight);
  printf("Enter height in meters: ");
  scanf("%lf", &height);

  printf("\nWeight:  \t %.4lf kg \n", weight);
  printf("Height:  \t %.4lf m \n", height);

  BMI = weight/pow(height,2);
  printf("BMI:    \t %.4lf ", BMI);

  if (BMI >= 30) {
        printf("\nStatus: \t 0bese\n");
  }
  else if (BMI >= 25){
        printf("\nStatus: \t Overweight\n");
  }
  else if (BMI >= 18.5){
        printf("\nStatus: \t Normal\n");
  }
  else if (BMI < 18.5){
        printf("\nStatus: \t Underweight\n");
  }
  return 0;
}
