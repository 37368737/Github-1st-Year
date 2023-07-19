#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n, i, topscore, second, third;
    int c=1;
    printf("C-program that receives the marks of students:\n\n");

    topscore = n;
    second = -1;
    third = -1;

    while (n>=0){
    printf("Enter mark for student %d: ", c);
    scanf("%lf", &n);
    c++;
    if (topscore<=n){
        third=second;
        second=topscore;
        topscore=n;
    }
    else if(second<=n){
        third=second;
        second=n;
    }
    else if (third<=n){
        third=n;
    }
    }
    printf("\n\nThe top score is:\t\t%.2lf\n", topscore);
    if(second>-1){
    printf("The 2nd highest score is:\t%.2lf\n", second);
    }
    if(third>-1){
    printf("The 3rd highest score is:\t%.2lf\n\n", third);
    }
    return 0;
}
