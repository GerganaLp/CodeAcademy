/*Задача 8 Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга */
#include <stdio.h>
#include <string.h>
void reverse(char s[]);
int main(void)
{

    char s[] = "hello";
    reverse(s);
    printf("%s\n", s);

    return 0;
}
void reverse(char s[])
{
    int i;
    int j;
    int h;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        h = s[i];
        s[i] = s[j];
        s[j] = h;
    }
}