//Напишете програма на С, която чрез функция проверява дали дадено число е четно или не.
#include <stdio.h>
int isEven(int n);
int main(void){
    int n;
    scanf("%d",&n);
    isEven(n);


    return 0;
}
int isEven(int n){
    if(n % 2 == 0)
        printf("Number is even");
    else 
        printf("Number is odd");
    
    
}
