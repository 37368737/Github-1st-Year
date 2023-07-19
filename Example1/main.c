#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int t1=1,t2=1;
    printf("\n\nEnter instance count: ");
    scanf("%d",&input);

    if(input>=1)
        printf("1");

    if(input>=2)
        printf(", 1");

    while(input>=3){
        int ans = t1 + t2;
        printf(", %d", ans);
        t2 = t1;
        t1 = ans;
        input--;
    }
    return 0;
}
