/*Задача 7. Дефинирайте масив int с 10 елемента. Дефинирайте
пойнтер, който ще сочи към масива. Насочете пойнтера към масива. Нужно
ли е да използвате &? Какво представлява името на масива? Какво сочи?
Колко начина има за да изпишете насочването на пойнтера към масива.
Има ли разлика между тях? */
#include <stdio.h>
int main(void)
{
    int arr[10];
    int *p; // pointer
    p = &arr[0];
    //Какво представлява името на масива? -името на масива е указател към първия елемент от него.
    int a[10];
    int p1;//pointer 2
    p1=a; 
    //и двта начина са възможни
    return 0;
}
