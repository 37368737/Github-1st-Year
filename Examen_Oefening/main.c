#include<stdio.h>
#include<stdlib.h>
int find_point(int j,int a,int b);
int main()
{
    int a, b, i, k, point, w=0;
    int j=20, l=0;
    i=j;
    k=l;


    printf("Question 1 \n\n");
    printf("y = ax + b\n");
    printf("Enter a value for a: ");
    scanf("%d",&a);

    point = find_point;
    int spc[20]={point};

    printf("\nEnter a value for b: ");
    scanf("%d",&b);
    printf("\n");

    for (i=j; i>0; i--){
        printf("%d", j);
        j--;
        if ( w>=0 ,w<point, w++){
            printf(" ");
        }
        else if ( w>=0 , w=point , w++){
            printf(".\n");
        }
        }
        for (k=l; k<=20; k++){
            printf("%d  ", l);
            l++;
            }

        return 0;
}
    int find_point( int j,int a,int b){
            return (j*a) + b;
    }
