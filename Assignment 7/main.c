//WG Kotzee 37368737
#include <stdio.h>
#include <stdlib.h>

double find_test(int num);

int main()
{
    printf("Assignment 7\n");
    int num,j=1;
    double test;
    while(j!=0){
        printf("\nEnter a value (use 0 to stop): ");
        scanf("%d",&num);
        if(num==0){
            break;
        }
        test= find_test(num);
        if(test==0){
            printf("%d is NOT a valid number.\n",num);
        }
        else{
            printf("%d is a valid number.\n",num);
        }
    }
    return 0;
}
        double find_test(int num){
        int i= num % 2;
        return i;
}
