#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kids;
    int cookies;
    int cookies_per_kid;
    int cookies_left_over;

    printf("How many children do you have? : ");
    scanf("%d",&kids);
    printf("How many cookies are there? : ");
    scanf("%d",&cookies);

    cookies_per_kid = cookies/kids;
    cookies_left_over = cookies%kids;

    printf("\n\nYou have %d children and %d cookies.",kids,cookies);
    printf("\nGive each child %d cookies.",cookies_per_kid);
    printf("\nThere are %d cookies left.\n\n",cookies_left_over);
    return 0;
}
