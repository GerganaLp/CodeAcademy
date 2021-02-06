/*Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0 */
#include <stdio.h>
int our_strcmp(char *s, char *t);
int main(void)
{
    printf("strcmp = %d\n", our_strcmp("a", "a"));
    printf("strcmp = %d\n", our_strcmp("aa", "a"));
    printf("strcmp = %d\n", our_strcmp("a", "aa"));

    // signal to operating system program ran fine
    return 0;

    return 0;
}
int our_strcmp(char *s, char *t)
{
    while ((*s != '\0' && *t != '\0') && *s == *t)
    {
        s++;
        t++;
    }

    if (*s == *t)
    {
        return 0; // kogato sa ednakvi
    }
    else if (*s != '\0' && *t == '\0')
    {
        return 1; //kogato se razlichavat i pyrviq masiv pyrviq e po-golqm
    }
    else
    {
        return -1; //kogato se razlichavat i vtoriq masiv pyrviq e po-golqm
    }
}