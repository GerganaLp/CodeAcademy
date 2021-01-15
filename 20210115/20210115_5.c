#include<stdio.h>
int main(void){
    int x=1;
    int y=1;
    y=x+1;
    x=1+x+y;
    printf("x=%d, y=%d\n",x,y);
    return 0;
}