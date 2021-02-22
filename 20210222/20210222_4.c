/*Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.
struct name newvariable = {21,2,2020};
newvariable.memeber = value;
struct name newvariable = {.memeber3=2020,.member1=21, .memeber2=2}; */

#include <stdio.h>
#include <string.h>
struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct date contractdate = {17, 10, 1998};
    struct date contractdate2;
    contractdate2.day = 17;
    contractdate2.month = 10;
    contractdate2.year = 1998;
}