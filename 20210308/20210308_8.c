/*Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл. */
#include <stdio.h>
int main()
{
    FILE *fp = NULL; //укзател към файла
    char str[] = "This is my first string.";
    fp = fopen("test8.txt", "wt+");
    if (fp != NULL)
        fputs(str, fp);
    fclose(fp);
    return 0;
}