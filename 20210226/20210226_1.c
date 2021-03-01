/*Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте */

#include <stdio.h>

typedef struct Student{
   
    double grade;
}t_node;
int main(void){
    t_node grade={6.0};
    printf("%f", grade);

    return 0;
}