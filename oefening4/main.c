#include <stdio.h>
#include <stdlib.h>

int main()
{
   int pets;
   printf("How many pets?:");
   scanf("%d",&pets);
   printf("\n\nYou have %d pet%s.",pets,pets==1? "" : "s");
    return 0;
}
