/*Напишете програма, която да представя Реда на Фибоначи в масив. */ 
#include <stdio.h>
int main()
{
    int n, k;
     int array[20];

    printf("Enter the number range:\n");
    scanf("%d", &n);
    array[0] = -1;
    array[1] = 1;
    printf("\n FIBONACCI SERIES: \n");
    for (k = 2; k <= n + 1; k++)
    {
        array[k] = array[k - 1] + array[k - 2];
        printf(" %ld", array[k]);
    }
    return 0;
}

