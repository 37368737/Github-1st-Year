//WG Kotzee 37368737
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Complete the series for N places: 15, 12, 24, 21, 42...");
    int N;
    printf("\nChoose a value for N: ");
    scanf("%d", &N);
    int num=15;
    printf("\n%d\n",num);
         for ( int count=1; count < N ;count++){
            if (count%2 ==1){
                num=num-3;
            }
            else {
                num=num*2;
            }
          printf("%d\n",num);
    }
    return 0;
}
