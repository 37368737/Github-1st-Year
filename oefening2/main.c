#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    printf("Enter a character: ");
    scanf("\n%s%*c",&character);
    printf("\n\n%c",character);
    return 0;
}
