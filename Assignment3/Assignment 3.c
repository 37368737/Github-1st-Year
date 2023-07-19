#include<stdio.h>
//WG Kotzee 37368737 0815928205

int main()
{
    double num;
    int multi, odd, col, row;

    printf("Size of the odd number multiplication table: ");
    scanf("%lf" , &num);
    printf("\n");

    double i =num/2;
    int num1=i;
    double decimal = i -num1;

    if(decimal>0){
        num1=num1+1;
    }

    odd = 1;

    for (row = 1; num>=row; row++){
        for (col = 1; num1>=col; col++){
            multi = odd*row;
            printf("%d\t",multi);
            odd = odd + 2;
        }
        odd = 1;
        printf("\n");
    }


    return 0;
}
