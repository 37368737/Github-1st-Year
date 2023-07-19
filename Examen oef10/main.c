#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k;

    printf("Size of the odd number multiplication table: ");
    scanf("%d", &n);
    printf("\n");

    k = n/2;
    int arr[n][k];

    for (i=1; i<n; i++){
        for( j=1; j<5 ; j++){
        printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
