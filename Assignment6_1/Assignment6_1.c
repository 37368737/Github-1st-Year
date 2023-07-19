//WG Kotzee 37368737
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int numbers[]={55,44,33,22,11},i=0,j=0;
    char chars[]={'H','a','l','l','o'};

    printf("index\tNumVal\tNumAddress\t      CharVal\t  CharAddress\n\n");

    for(i=0;i<=4;++i){
        printf("[%d]\t%d\t0x%p\t%c\t0x%p\n",i,numbers[i],&numbers[i],chars[i],&chars[i]);
    }

    printf("\nChanged values:\n\n");

    printf("index\tNumVal\tNumAddress\t      CharVal\t  CharAddress\n\n");

    numbers[0]=29;
    numbers[1]=39;
    numbers[2]=49;
    numbers[3]=59;
    numbers[4]=69;

    chars[0]='p';
    chars[1]='i';
    chars[2]='z';
    chars[3]='z';
    chars[4]='a';

    for(j=0; j<=4; ++j){
        printf("[%d]\t%d\t0x%p\t%c\t0x%p\n",j,numbers[j],&numbers[j],chars[j],&chars[j]);
    }
    return 0;
}
