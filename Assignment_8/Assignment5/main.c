//WG Kotzee 37368737
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 20;
    int *ptr=NULL;
    int *ptr2=NULL;

    ptr=&num1;
    ptr2=&num1;

    printf("Assignment 5");
    printf("\n\nValue of number: \t%d",num1);
    printf("\nAddress of number:\t0x%p",&num1);
    printf("\nValue of pointer:\t%d",*ptr);
    printf("\nAddress of pointer:\t0x%p",ptr);
    printf("\nValue of pointer2:\t%d",*ptr2);
    printf("\nAddress of pointer2:\t0x%p\n\n",ptr2);

    printf("Change value of number to 5000 using *pointer2");
    *ptr2=5000;

    printf("\n\nValue of number: \t%d",num1);
    printf("\nAddress of number:\t0x%p",&num1);
    printf("\nValue of pointer:\t%d",*ptr);
    printf("\nAddress of pointer:\t0x%p",ptr);
    printf("\nValue of pointer2:\t%d",*ptr2);
    printf("\nAddress of pointer2:\t0x%p\n\n",ptr2);
    return 0;
}
