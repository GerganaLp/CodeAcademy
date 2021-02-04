/*Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */
#include <stdio.h>
void my_swap(int *a, int *b);
int main(void)
{
    int num1, num2;
    printf("enter a=");
    scanf("%d", &num1);

    printf("enter b=");
    scanf("%d", &num2);
    my_swap(&num1, &num2);
    printf("After  Swapping: a is: %d, b is: %d\n", num1, num2);
    return 0;
}
void my_swap(int *a, int *b)
{

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}