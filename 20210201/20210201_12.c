
/*Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция) */
#include <stdio.h>
#include <string.h>

int any(char s1[], char s2[]);

int main(void)
{
    char s1[] = "This is fun";
    char s2[] = "fin";
    char *ret;

    ret = strpbrk(s1, s2);
    if (ret)
    {
        printf("First matching character: %c\n", *ret);
    }
    else
    {
        printf("No matching chars\n");
    }

    return 0;
}

int any(char s1[], char s2[])
{

    int i = 0, j = 0;

    for (i = 0; i < strlen(s1); i++)
    {
        for (j = 0; j < strlen(s2); j++)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
        j = 0;
    }

    return -1;
}
