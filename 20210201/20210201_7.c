/*Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/

#include <stdio.h>
unsigned long long int product(int a);
int main(void)
{

    printf("%lu", product(30));
    return 0;
}
unsigned long long int product(int a)
{
    if (a > 1)
    {
        return a * product(a - 1);
    }
    else
    {
        return 1;
    }
}