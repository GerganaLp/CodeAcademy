#include <stdio.h>
#include <string.h>

int main(void){

    char str[]="HELLO";
    str[0]='h';
    str[1]='e';
    str[2]='l';
    str[3]='l';
    str[4]='o';
    str[5]='\0';
    printf("%s",str);
    return 0;
}