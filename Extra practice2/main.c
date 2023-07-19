#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Read values from the user and display them.\n\n");

    int num1;
    double decimal;
    char character;
    char sentence[500];

    printf("Enter an integer value: ");
    scanf("%d",&num1);
    printf("Enter a decimal value: ");
    scanf("%lf",&decimal);
    printf("Enter some character: ");
    scanf("%s%*c",&character);
    printf("Enter a sentence: ");
    scanf("%[^\n]",&sentence);

    printf("\n\nOUTPUT:");
    printf("\n\tnumber1 (int) \t\t: %d",num1);
    printf("\n\tdecimal1 (double)\t: %.3lf",decimal);
    printf("\n\tcharacter1 (char)\t: %c",character);
    printf("\n\tsentence (char[])\t: %s\n", sentence);
    return 0;
}
