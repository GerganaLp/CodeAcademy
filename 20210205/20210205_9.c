/*Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s . */
#include <stdio.h>
char *strncpy(char *s, char *ct, int n);
int main(void)
{
    char s[] = "Hello";
    char t[] = "how are you";
    strncpy(s, t, 7);
    printf("new string is: %s", s);
    return 0;
}

char *strncpy(char *s, char *t, int n)
{
    char *saver = s;

    while (n--)
        *saver++ = *t++;
    *saver = '\0';

    return s;
}