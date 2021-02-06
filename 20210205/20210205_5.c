/*Задача 5. Напишете функцията void our_strcat(char *s, char *t), която
добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. Функцията strcat() предполага, че има
достатъчно в s за да се копират всички стойности на низа t, защото иначе
оператор за присвояване може да работи извън размера на масива и да
имаме грешка. Но не сме разгледали динамичното заделяне на памет с
malloc. */
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
    int i = 0, j = 0;

    while (s[i] != '\0')
    { //namirame kraq na pyrviq
        i++;
    }
    while (s[i] = t[j])
    { //slagame elementite na vtoriq sled kraq na pyrviq
        i++;
        j++;
    }
}