
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, count=1,i;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n");

    while(count <= num){
        i = 1;
        while(i <= count){
            printf("* ");
            i++;
        }
        printf("\n");
      count++;
    }
    count = count-2;

    while(count >= 0){
        i = 1;
        while(i <= count){
            printf("* ");
            i++;
        }
        printf("\n");
      count--;
    }
    return 0;
}
