#include <stdio.h>
int main(void){

    int x=10;
    int y=10;
    int true=++x && x||y;
    printf("%d\n",true);
    

return 0;
}