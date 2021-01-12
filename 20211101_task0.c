#include <stdio.h>
int addDigit(int a,int b);
int main(void){
int a=3;
int b=5;
int res=a&b;
int res1=a|b;
int res2=a^b;
printf("%d\n", res);
printf("%d\n", res1);
printf("%d\n", res2);
printf("%d\n",addDigit(a,b));
return 0;
}

int addDigit(int a, int b){
    return a+b;
}