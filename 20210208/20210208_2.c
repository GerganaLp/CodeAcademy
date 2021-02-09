/*Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf. */
#include <stdio.h>
int main(void)
{
    int matrix[5][5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Item[%d][%d]=", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
    }
    return 0;
}