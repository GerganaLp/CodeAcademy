/*Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/

#include <stdio.h>
#include <string.h>
void reverse(char *str);
double atof(char *str);
void itoa(int *num, char *str2);
int atoi(char *str3);

int main(void)
{
    char str[] = "Hello!";
    reverse(str);
    printf("\nReverse: %s", str);

    char str1[] = "123.456";
    printf("\natof : %lf", atof(str1));

    char str2[] = " ";
    int num = 456;
    int *pNum = &num;
    itoa(pNum, str2);
    printf("\nitoa:  %s", str2);

    char str3[] = "123";
    printf("\natoi:  %d", atoi(str3));

    return 0;
}
void reverse(char *str)
{
    int i, j, buff;

    for (i = 0, j = (strlen(str) - 1); i < j; i++, j--)
    {
        buff = str[i];
        str[i] = str[j];
        str[j] = buff;
    }
}
double atof(char *str)
{
    double num, power = 0.0;

    for (num = 0; *str >= '0' && *str <= '9'; *str++)
    {
        num = 10 * num + (*str - '0');
    }
    if (*str == '.')
        *str++;

    for (power = 1.0; *str >= '0' && *str <= '9'; *str++)
    {
        num = 10.0 * num + (*str - '0');
        power *= 10;
    }
    return num / power;
}
void itoa(int *num, char *str2)
{
    int i = 0;

    do
    {
        *str2 = *num % 10 + '0';
        *str2++;
    } while ((*num /= 10) > 0);

    *str2 = '\0';
}
int atoi(char *str3)
{
    int n = 0;

    for (; *str3 >= '0' && *str3 <= '9'; *str3++)
        n = 10 * n + (*str3 - '0');

    return n;
}