#include <stdio.h>
#pragma pack(1)
struct bit{
    short int siVal:3;
    short int siVal2:3;
    char chVal:6;
    char chVal2:6;
};
int main(){
    struct bit a ={.siVal = 7, .chVal='c'};
    printf("a.siVal = %d\n", a.siVal);
    printf("a.chVal = %c\n", a.chVal);
    printf("sizeof(a) = %d\n",sizeof(a));
}