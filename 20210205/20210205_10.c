#include <stdio.h>
#include <string.h>

/*Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.
*/

void myStrncat(char *s, char *t, unsigned int n)
{
    for (int i = 0, j = strlen(s); i < n; i++, j++)
    {
        s[j] = t[i];
    }
}

int main(void)
{
    char str1[] = "Hello ";
    char str2[] = "how are you";
    myStrncat(str1, str2, 7);
    printf("The new string is: %s", str1);
    return 0;
}