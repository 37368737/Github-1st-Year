// WG Kotzee 37368737
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char word[100];
    int len1,i=0,j=0;

    printf("Enter a word: ");
    gets(word);
    printf("\n");
    len1 = strlen(word)-1;
    while(word[j] != '\0'){
        printf("[%d]: %c <--> %c :[%d]\n",j, word[j],word[len1], len1);
        len1--;
        j++;
        if(word[j] != word[len1]){
        i=1;
        }
    }
    if(i==1){
        printf("\n%s --> NOT Palindrome\n",word);
    }
    else{
        printf("\n%s --> Palindrome\n",word);
    }
    return 0;
}
