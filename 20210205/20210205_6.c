/*Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j. */
#include <stdio.h>
void our_strcat(char *s, char *t);
int main(void)
{

    char s[] = "I love ";
    char t[] = "you";
    our_strcat(s, t);
    printf("%s", s);
    return 0;
}
void our_strcat(char *s, char *t)
{
    // int i = 0, j = 0;

    while (*s != '\0')
    { //namirame kraq na pyrviq
        s++;
    }
    while (*t != '\0')
    { //slagame elementite na vtoriq sled kraq na pyrviq
        *s++ = *t++;
    }
}