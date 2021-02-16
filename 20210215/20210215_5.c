/*Задача 5.
Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата). */

#include <stdio.h>
int main(void){
    int value=34;
    int *p=value;
    printf("pointer: %d\n", p);
    printf("value: %d",&value);


    return 0;
}