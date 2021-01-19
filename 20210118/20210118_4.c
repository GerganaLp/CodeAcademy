#include <stdio.h>
int main(void){

    int x=10;
    int y=10;
    int true=x && y & x <<1; //изпълнява се от дясно на ляво, << е с най-голям приоритет, след това & и накрая &&
    printf("%d\n",true);
 
    int true1 = x && y ^ x <<1; //също ще се изпълни от дясно на ляво
    printf("%d",true1);
return 0;
}