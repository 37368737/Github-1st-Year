#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Read values from user and display them.\n\n");

    int num;
    double decimal;
    char character;
    char sentence[500];

    printf("Enter an integer value: ");
    scanf("%d",&num);
    printf("Enter a decimal value: ");
    scanf("%lf",&decimal);
    printf("Enter some character: ");
    scanf("%s%*c",&character);
    printf("Enter a sentence: ");
    scanf("%[^\n]",&sentence);

    printf("\nOUTPUT:");
    printf("\n\tnumber1 (int)\t\t: %d", num);
    printf("\n\tdecimal1 (double)\t: %.3lf", decimal);
    printf("\n\tcharacter1 (char)\t: %c", character);
    printf("\n\tsentence (char[])\t: %s\n", sentence);

    return 0;
}
