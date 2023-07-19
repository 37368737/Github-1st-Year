//WG Kotzee
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int letter, digit, spch, i;
    letter = digit = spch = i = 0;
    printf("Enter any string : ");
    fgets(str,sizeof str, stdin);

    while(str[i]!='\0'){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            letter++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digit++;
        }
        else{
            spch++;
        }
        i++;
    }
    printf("Alphabets = %d\n",letter);
    printf("Digits = %d\n", digit);
    printf("Special Characters = %d",spch);
    return 0;
}
