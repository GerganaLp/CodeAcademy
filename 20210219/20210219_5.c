#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x;
    int y;
};

int main(int argc, char *argv[])
{
    char board[15][15];
    for (int i = 0; i < 15; i++)

    {
        for (int j = 0; j < 15; j++)
        {
            board[i][j] = '-';
        }
    }
    struct point a = {3, 4};
    struct point b = {7, 10};
    for (int i = a.x; i <= b.x; i++)

    {
        for (int j = a.y; j <= b.y; j++)
        {
            board[i][j] = '@';
        }
    }
    for (int i = 0; i < 15; i++)

    {
        for (int j = 0; j < 15; j++)
        {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}