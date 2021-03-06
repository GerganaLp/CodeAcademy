/*Задача 15.
Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4. */

#include <stdio.h>
void copy(char *to, char *from);
int main(void)
{
    char string1[] = "A string to be copied";
    char string2[40];
    copy(string2, string1);
    printf("\n%s \n", string2);
    char string3[] = "I am very good in string coping";
    char string4[40];
    copy(string4, string3);
    printf("\n%s \n", string4);
    return 0;
}
void copy(char *to, char *from)
{
    while (*from)
    {
        *to++ = *from++;
    }
    *to = '\0';
}
