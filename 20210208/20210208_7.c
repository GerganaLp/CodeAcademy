/*7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината. */
#include <stdio.h>
int g_days[] = {31, 28, 31, 30, 31, 30,
                31, 31, 30, 31, 30, 31};
int dayOfYear(int day, int month, int year);
int main(void)
{

    printf("%d", dayOfYear(17, 10, 1998));
    return 0;

    return 0;
}
int dayOfYear(int day, int month, int year)
{
    if (month > 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        ++day;
    }
    while (month-- > 0)
    {
        day = day + g_days[month - 1];
    }
    return day;
}