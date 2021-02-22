/*Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана. */
#include <stdio.h>
#include <string.h>
struct name
{
    int v1;
    char v2[128];
    float v3;
};
int main()
{
    struct name new; /*дефинираме нова променлива*/
    new.v1 = 50;
    strcpy(new.v2, "chocolate");
    new.v3 = 2.50;
    printf("%d %s %f", new.v1, new.v2, new.v3);
    return 0;
}