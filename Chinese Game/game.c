#include"game.h"
#define col 7
#define row 7
#define col2 7
#define row2 7

int board[7][7] = {
    {45, 45, 16, 45, 45, 45, 45},
    {45, 45, 11, 3, 13, 45, 45},
    {45, 22, 6, 7, 8, 9, 21},
    {45, 19, 12, 4, 14, 15, 45},
    {5, 17, 18, 2, 20, 1, 45},
    {45, 45, 10, 23, 24, 45, 45},
    {45, 45, 45, 45, 45, 45, 45}};

static int Oldboard[7][7] = {
    {45, 45, 16, 45, 45, 45, 45},
    {45, 45, 11, 3, 13, 45, 45},
    {45, 22, 6, 7, 8, 9, 21},
    {45, 19, 12, 4, 14, 15, 45},
    {5, 17, 18, 2, 20, 1, 45},
    {45, 45, 10, 23, 24, 45, 45},
    {45, 45, 45, 45, 45, 45, 45}};
void printBoard()
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (board[i][j] == 45)
            {
                printf("%c\t", board[i][j]);
            }
            else
            {
                printf("%d\t", board[i][j]);
            }
        }
        printf("\n");
    }
}
void printOldBoard()
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (Oldboard[i][j] == 45)
            {
                printf("%c\t", Oldboard[i][j]);
            }
            else
            {
                printf("%d\t", Oldboard[i][j]);
            }
        }
        printf("\n");
    }
}

void redoMoves()
{

    int choice;
    printf("Do you want to rewind your move? - Press 1 for yes or 2 for no\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:

        printOldBoard();
        printf("Game over");
        break;

    case 2:
        printf("You win!!!");
        break;
    }
}

void startWithOne()

{
    int choice, number, move, validMove, i, j;

menu:
    printBoard(board);
    printf("Menu\n");
    printf("1.Make a turn\n");
    printf("2.Exit\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the number you would like to move to: \n");

        scanf("%d", &number);
        if (number == 1 || number == 2 || number == 10 || number == 4 || number == 22)
        {

            switch (number)
            {

            case 1:

                if (number == 1)
                {
                    int temp = board[4][5];
                    board[4][5] = board[2][6];
                    board[2][6] = board[1][4];
                    board[1][4] = board[0][2];
                    board[0][2] = temp;
                    printf("Hint: next move 2\n");
                }
                else
                {
                    printf("Invalid move\n");
                }
                goto menu;
                break;

            case 2:
                if (number == 2)
                {
                    int temp = board[4][3];
                    board[4][3] = board[3][1];
                    board[3][1] = board[1][2];
                    board[1][2] = temp;
                    printf("Hint: next move 10\n");
                }
                else
                {
                    printf("Invalid move\n");
                }
                goto menu;
                break;
            case 10:
                if (number == 10)
                {
                    int temp = board[5][2];
                    board[5][2] = board[3][3];
                    board[3][3] = board[1][4];
                    board[1][4] = board[2][6];
                    board[2][6] = temp;
                    printf("Hint: next move 4\n");
                }
                else
                {
                    printf("Invalid move\n");
                }
                goto menu;
                break;
            case 4:
                if (number == 4)
                {
                    int temp = board[5][2];
                    board[5][2] = board[3][3];
                    board[3][3] = board[1][4];
                    board[1][4] = temp;
                    printf("Hint: next move 22\n");
                }
                else
                {
                    printf("Invalid move\n");
                }
                goto menu;
                break;
            case 22:
                if (number == 22)
                {
                    int temp = board[2][1];
                    board[2][1] = board[4][0];
                    board[4][0] = board[5][2];
                    board[5][2] = temp;
                    
                }
                else
                {
                    printf("Invalid move\n");
                }

                printBoard();
                redoMoves();
            }
        }
        else
        {
            printf("Your move is wrong.Game over.");
        }
    }
}
void startWithTen()
{
    int choice, number, move, validMove, i, j, c;
    int old[7][7];
menu:

    printBoard(board);
    printf("Menu\n");
    printf("1.Make a turn\n");
    printf("2.Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the number you would like to move to: \n");
        scanf("%d", &number);
        if (number == 10 || number == 4 || number == 2 || number == 1 || number == 5)
        {

            switch (number)
            {
            case 10:

                if (number == 10)
                {
                    int temp = board[5][2];
                    board[5][2] = board[3][3];
                    board[3][3] = board[4][5];
                    board[4][5] = board[2][6];
                    board[2][6] = temp;
                    printf("Hint: next move 4\n");
                }
                else
                {
                    printf("Invalid move\n");
                }
                goto menu;
                break;

            case 4:
                if (number == 4)
                {
                    int temp = board[5][2];
                    board[5][2] = board[3][3];
                    board[3][3] = board[1][4];
                    board[1][4] = temp;
                    printf("Hint: next move 2\n");
                }
                else
                {
                    printf("Invalid move\n");
                }
                goto menu;
                break;
            case 2:
                if (number == 2)
                {
                    int temp = board[4][3];
                    board[4][3] = board[3][1];
                    board[3][1] = board[1][2];

                    board[1][2] = temp;
                    printf("Hint: next move 1\n");
                }
                else
                {
                    printf("Invalid move\n");
                }
                goto menu;
                break;
            case 1:
                if (number == 1)
                {
                    int temp = board[5][2];
                    board[5][2] = board[4][0];
                    board[4][0] = board[2][1];
                    board[2][1] = board[0][2];
                    board[0][2] = temp;
                    printf("Hint: next move 5\n");
                }
                else
                {
                    printf("Invalid move\n");
                }
                goto menu;
                break;
            case 5:
                if (number == 5)
                {
                    int temp = board[5][2];
                    board[5][2] = board[4][0];
                    board[4][0] = board[2][1];
                    board[2][1] = temp;
                }
                else
                {
                    printf("Invalid move\n");
                }

                printBoard();
                redoMoves();
            }
        }
        else
        {
            printf("Your move is wrong");
        }
    }
}
