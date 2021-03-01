/*Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин. */
#include <stdio.h>
typedef struct Student{
int number;
struct Student *pointer;
} t_node;
int main(){
    typedef t_node *t_pointer;
    t_pointer test=(t_pointer)malloc(12);
    printf("size of test:%d ",sizeof(test));
    return 0;
}