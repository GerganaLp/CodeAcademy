/*Задача 8.
Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf. */

#include <stdio.h>
int main(void){
    int a=5;
    int *aPtr=&a;
    printf("pointer value is: %p\n", aPtr);


    return 0;
}