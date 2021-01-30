//Напишете функция, която връща резултат (а+в)*4
#include <stdio.h>
int function(int a, int b);
int main(void){

    int a,b;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf("Result is %d",function(a,b));



    return 0;
}
int function(int a, int b){
    return (a+b)*4;
}