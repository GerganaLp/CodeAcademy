/*Задача 14.
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/

#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};
void print(struct date *pointer)
{

    printf("%d %d %d", pointer->day, pointer->year, pointer->month);
}
void validate(struct date *valid)
{
    if (valid->year >= 1900 && valid->year <= 9999)
    {
        //check month
        if (valid->month >= 1 && valid->month <= 12)
        {
            //check days
            if((valid->day>=1 && valid->day<=31) && (valid->month<=12)
                printf("Date is valid.\n");
            else if((valid->date>=1 && valid->date<=30) && (valid->month==4 || valid->month==6 || valid->month==9 || valid->month==11))
                printf("Date is valid.\n");
            else if((valid->date>=1 && valid->date<=28) && (valid->month==2))
                printf("Date is valid.\n");
            else if(valid->date==29 && valid->month==2 && (valid->year%400==0 ||(valid->year%4==0 && valid->year%100!=0)))
                printf("Date is valid.\n");
            else
                printf("Day is invalid.\n");
        }
        else
        {
            printf("Month is not valid.\n");
        }
    }
    else
    {
        printf("Year is not valid.\n");
    }
}
int main()
{

    struct date test = {17, 10, 1998};
    struct date *ptr = &test;
    print(ptr);
    return 0;
}