/*Задача 4.
Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира? */

#include <stdio.h>
int main(void){
    int *iValue=10;
    int *ptr=&iValue;
    printf("%p", ptr);


    return 0;
} 
