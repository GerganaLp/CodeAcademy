//Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор
#include <stdio.h>
#include <string.h>
struct date
{
    int day;
    int month;
    int year;
};
int main()
{   int i;
    struct date arr[10];   
    arr[i].day = 17; 
    struct date arr2[10] =
    {
        {1, 3, 2019},
        {3, 4, 2020},
        {23, 12, 2008},
        {29, 9, 1972},
        {17, 4, 1976},
        {24, 2, 1992},
        {6, 5, 2020},
        {17, 10, 1998},
        {16, 3, 2019},
        {6, 4, 2019},
    }    ;                                               /* define and init array members */
    struct date arr[10] = {[1] = {3, 4, 2020}};             /* define and init array members */
    struct date arr[10] = {[1].month = 4, [1].year = 2020}; /* define and init array members */
}