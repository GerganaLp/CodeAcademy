/*Задача 7.
Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана. */
#include <stdio.h>
#include <string.h>
union zadacha
{
    int number;
    float number2;
    char str[32];
};
int main()
{
    union zadacha data = {17};

    printf("Numeber: %d, Float number: %f, Text: %s\n", data.number,
           data.number2, data.str);
    return 0;
}
