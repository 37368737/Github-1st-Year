#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1;
   int num2;
   int age;
    printf("What college? 1 for Harvard, 2 for Yale, 3 for other: ");
    scanf("%d",&num1);
    printf("\nWhat subject? 1 for Chemistry, 2 for economics, 3 for other: ");
    scanf("%d", &num2);
    printf("\nHow old is the applicant? ");
    scanf("%d",&age);

    if(num1 !=2 && num2==1 && age >=25){
        printf("\nGive 'em an interview\n");
    }
    if(num1==2 && num2==1){
        printf("\n\nGive 'em an interview\n");
    }
    if(num1==1 && num2==2 && age <=28){
        printf("\n\nGive 'em an interview\n");
    }
    if(num1==2 && num2 !=1 && age >=25){
        printf("\n\nGive 'em an interview\n");
    }
    return 0;
}
