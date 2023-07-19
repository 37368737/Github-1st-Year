#include <stdio.h>
#include <stdlib.h>

void ReadFile(char *str, int size_max);
void Decrypt(char *str, int size);

int main()
{

    char str[100];
    ReadFile(str, 100);

    printf("%s\n", str);

    Decrypt(str, 100);

    printf("%s\n", str);

    return 0;
}

void ReadFile(char *str, int size_max){

    FILE *f;
    f = fopen("input.txt", "r");
    if(f != NULL)
    fgets(str, size_max, f);

}

void Decrypt(char *str, int size){

    int i = 0;
    while(*(str + i) != '\0' && i < size)
    {
        if(i % 2 == 0)
            *(str +i) +=3;
        else
            *(str +i) -=3;
        i++;

    }
}
