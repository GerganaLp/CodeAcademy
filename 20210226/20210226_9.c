/*Задача 9. Изведете резултата от деленето на две цели
числа от тип int като double с преобразуване и без такова */
#include <stdio.h>
int main()
{
    int num = 17;
    int num2 = 10;
    double res = 0.0;
    res = (double)num / num2;
    printf("Value of num/num2 : %lf \n", res);

    return 0;
}
