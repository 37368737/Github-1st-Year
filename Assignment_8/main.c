//WG Kotzee 37368737
#include <stdio.h>
#include <stdlib.h>

int Find_max(int num1, int num2);
int Find_sum(int num1, int num2);
int Find_average(int num1, int num2);
int Find_multiplication(int num1, int num2);
int Find_subtraction(int num1, int num2);

int main()
{
    int num1= 100, num2= 200, max, sum, average, multiply, subtract;

    max = Find_max( num1, num2);
    sum = Find_sum( num1, num2);
    average = Find_average( num1, num2);
    multiply = Find_multiplication( num1, num2);
    subtract = Find_subtraction( num1, num2);

    printf("The Maximum value is : %d\n",max);
    printf("\nThe sum of the two numbers : %d\n",sum);
    printf("\nThe average of the two numbers : %d\n",average);
    printf("\nThe multiplication of the two numbers : %d\n",multiply);
    printf("\nThe Subtraction of the two numbers : %d\n\n",subtract);

    return 0;
}
    int Find_max( int num1, int num2){
        int i;
        if ( num1>num2 ){
            return num1;
        }
        else if ( num1<num2 ){
            return num2;
        }
        }
    int Find_sum( int num1, int num2){
        return num1 + num2;
    }
    int Find_average( int num1, int num2){
        return (num1 + num2)/2;
    }
    int Find_multiplication( int num1, int num2){
        return num1*num2;
    }
    int Find_subtraction( int num1, int num2){
        return num1-num2;
    }
