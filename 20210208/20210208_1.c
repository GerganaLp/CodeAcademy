/*Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf */

#include <stdio.h>
int main(void)
{
    int i;
    int arr[5];
    for (i = 0; i < 5; i++)
    {
        printf("Element[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    // извеждане стойностите на елементите
    for (i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}