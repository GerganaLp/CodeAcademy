#include <stdio.h>
int vzemiBitna(int num, int index);
int main(){
    int num;
    int index;
    printf("%d", vzemiBitna(num,index));
    
}
int vzemiBitna(int num, int index){
    int h=1;
    num=num>>index;
    num=num&index;
    return num;
}