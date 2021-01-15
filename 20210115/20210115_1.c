#include <stdio.h>
extern int nValue; //global variable declaration
int main(void){
    printf("Global variable=%d \n",nValue);
    return 0;

}
int nValue=321; //global value definition 