#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount;
    printf("Enter amount of prime numbers: ");
    scanf("%d", &amount);

    int count = 0;
    int current = 1;
    while(current < amount){
        int is_prime = 1;
        for(int i=1; i< current; i++)
            if(current%i == 0 && i != 1)
                is_prime = 0;

        if(is_prime == 1)
        {
            printf("%d ", current);
            count++;
        }
        current++;
    }
    return 0;
}
