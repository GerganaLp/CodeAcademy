/*Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float */
#include <stdio.h>

int main(void)
{

    double mB[10];
    int i;
    double suma, average;
    for (i = 0; i < 10; i++) //въвеждане стойностите на елементите
    {
        printf("Item[%d]=", i);
        scanf("%lf", &mB[i]);
    }
    suma = 0; // намиране сумата на елементите
    for (i = 0; i < 10; i++)
        suma += mB[i];
    average = suma / 10; // намиране на средноаритметична стойност
    printf("\nAverage = %lf", average);
}