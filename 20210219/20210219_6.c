//Задача 6. Направете по подобен начин триъгълник

#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x;
    int y;
};

int main(void)
{
    char board[15][15];
    struct point a = {3, 4};
    struct point b = {7, 10};
    int i,j;
    
    for(i=0; i<15;i++){
    for(j=0;j<15;j++){
    if( i>a.x && j>a.y && i>b.x && j>b.y)
        printf("%c", '@');
        printf("%c", '-');
    }
    printf("\n");
        }
    return 0;
}