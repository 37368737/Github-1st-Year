//WG Kotzee 37368737
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("PRACTICAL 6:\n");
    printf("Array-Sorting\n\n");
    int i,j,x,w,g,k;
    printf("Enter the amount of numbers to save: ");
    scanf("%d",&i);

    int num[i];

    for( j=1; j<=i; j++){
        printf("Enter number %d:",j);
        scanf("%d",&num[j]);
    }

    printf("\nOriginal\n");

    for(x=1; x<=i; x++){
        printf("[%d] %d\n",x,num[x]);
    }

    printf("\nOrdered\n");

    for(w=1; w<=i; w++){
        for(g=w+1; g<=i; g++){
            if(num[w]>num[g]){
                k= num[w];
                num[w]= num[g];
                num[g]=k;
            }
        }
        printf("[%d] %d\n",w,num[w]);
    }
    printf("\n");
    return 0;
}
