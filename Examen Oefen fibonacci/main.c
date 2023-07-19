#include <stdio.h>
#include <stdlib.h>

int Fib(int);

int main()
{
    printf("Question 3\n");

    int n, a, i=1;

    printf("\nFibonacci series\n");
    printf("Enter a value N to complete the series: ");
    scanf("%d", &n);
    printf("\n");

    for (a=0; a<n; a++){
        printf("%d ",Fib(i));
        i++;
    }
    printf("\n");
    return 0;
}
int Fib(int n){
    if (n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return ( Fib(n-2)+Fib(n-1));
}
