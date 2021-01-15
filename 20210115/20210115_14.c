#include<stdio.h>

void test();
int gValue=1;
int main(void){
    test();
    test();
    test();
    printf("%d",gValue);
    return 0;
}
void test(){
    gValue++;
} 