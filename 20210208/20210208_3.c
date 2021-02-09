/*Задача 3. Дефинирайте и инициализирайте тримерен масив с по 5
елемента (5 x 5 x 5).*/

#include <stdio.h>
int main(void)
{
    int matrix[5][5][5];
    int i, j,h;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (h = 0; h < 4; h++)
        {
            printf("Item[%d][%d][%d]=", i, j,h);
            scanf("%d", &matrix[i][j][h]);
        }
    }
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 4; j++)
        {
            for (h = 0; h < 4; h++)
        {
            printf("%d ", matrix[i][j][h]);
        }
        }
    }
    return 0;
}