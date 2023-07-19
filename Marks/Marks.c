#include <stdio.h>

int main()
{
        int num;

        printf("Grade of Mark in C programming\n\n");
        printf("Please enter your mark?: ");
        scanf("%d", &num);

        printf("The mark you have entered is : %d", num);


        if (num >= 80){
            printf("You got A grade");
        }

        else if (num >= 60){
            printf("You got B grade");
        }

        else if (num >= 40){
            printf("You got C grade");
        }

        else if (num < 40){
            printf("Unfortunately you failed this exam");
        }

        return 0;
}
