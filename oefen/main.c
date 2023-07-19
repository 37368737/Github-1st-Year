#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1;
  printf("Toets codes");
  printf("Enter a number");
  scanf("%d",&num1);

  switch("num1"){
    case 1:
        printf("Fantastic");
        break;
    case 2:
        printf("Good");
        break;
    case 3:
        printf("Normal");
        break;
    }
    return 0;
}
