/*Задача 11.
Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата. */
#include <stdio.h>
#include <string.h>
union zadacha11
{
    int number;
    int number2;
    char str;
};
int main()
{
    union zadacha11 new; /*дефинираме нова променлива*/
    new.number = -7;
    new.number2 = 10;
    new.str = 'c';
    printf("%d %d %c", new.number, new.number2, new.str);
    return 0;

    return 0;
}