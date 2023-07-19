#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int num=5;

    printf("Pointers");

    ptr=&num;
    printf("\nAddress: %p", ptr);
    printf("\nValue: %d\n\n", *ptr);

    return 0;
}
