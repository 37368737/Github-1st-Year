//WG Kotzee 37368737
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c;
    //char *filename = "saved.txt";
    FILE *pfile = fopen("saved.txt","r");

    if((pfile = fopen("saved.txt","r")) == NULL)
    {
        printf("Error opening %s for reading", pfile);
        exit(1);
    }
    while((c = fgetc(pfile))!= EOF)printf("%c",c);

    fclose(pfile);
    return 0;
}
