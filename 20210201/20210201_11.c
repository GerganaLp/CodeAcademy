/*Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[] */
void squeeze(char s[], int c);
#include <stdio.h>
int main(void)
{
    char s[] = "heeeeeelo";
    squeeze(s, 3);
    return 0;
}
void squeeze(char s[], int c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[j] != c)
        {
            s[j] = s[i];
            j++;
            s[j] = '\0';
        }
    }
    printf("%c", s);
}
