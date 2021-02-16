/*Задача 7.
Направете програма, в която инициализирате пойнтер към
променлива и след това изчислявате сбор на променливата
(използвайки пойнтера) + 5. Отпечатайте на екрана. */

#include <stdio.h>
int main(void){
    int a=5;
    int *aPtr=&a;
    *aPtr=a+5;
    printf("Sum of pointer and variable is : %d", *aPtr);


    return 0;
}