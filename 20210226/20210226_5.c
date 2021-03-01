/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата */
#include <stdio.h>

int main(void){
    typedef int array[5];
    array a={1,2,3,4.5};
    for(int i=0; i<5;i++){
        printf("%d\n", a[i]);
    }

    return 0;
}