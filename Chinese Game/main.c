#include "game.h"

int main()
{
    printf("WELCOME! Possible fisrt move in chinese game is 1 or 10. With what you choose to start?\n");
    int number;
    scanf("%d", &number);
    if (number == 1)
    {
        startWithOne();
    }
    else if (number == 10)
    {
        startWithTen();
    }

    return 0;
}