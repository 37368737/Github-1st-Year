#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=20;
    int *ptr=NULL;
    int *ptr2=NULL;

    ptr=&num;
    ptr2=&num;

    printf("Assignment 5\n\n");
    printf("Value of number:\t%d\n",num);
    printf("Address of number:\t0x%p\n",&num);
    printf("Value of pointer:\t%d\n",*ptr);
    printf("Address of pointer:\t0x%p\n",ptr);
    printf("Value of pointer2:\t%d\n",*ptr2);
    printf("Address of pointer2:\t0x%p\n\n",ptr2);

    printf("Change value of number to 5000 using *pointer2\n\n");
    *ptr2=5000;

    printf("Value of number:\t%d\n",num);
    printf("Address of number:\t0x%p\n",&num);
    printf("Value of pointer:\t%d\n",*ptr);
    printf("Address of pointer:\t0x%p\n",ptr);
    printf("Value of pointer2:\t%d\n",*ptr2);
    printf("Address of pointer2:\t0x%p\n\n",ptr2);
    return 0;
}
