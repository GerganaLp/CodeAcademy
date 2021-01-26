#include <stdio.h>
int main(void){
    char c;
    int newLine=0;  //char i nov red
    while(c!= EOF) //chetem char dokato ne dostignem EOF
        if((c=getchar())=='\n') //ako char e nov red
        newLine++; //uvelichavame novite redove
        printf("%d lines\n",newLine); //printirame gi
        
        return 0;
    
}