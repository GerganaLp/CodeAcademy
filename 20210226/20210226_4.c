/*Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност */
#include <stdio.h>
//void multiply(int a, int b);
typedef int ( *t_plus ) (int, int);
int plus(int a, int b){
    return(a+b);
}
t_plus pointer=NULL;
int main(void){
   
    pointer=&plus;
    printf("A+B=%d ",pointer(2,3));


    return 0;
}