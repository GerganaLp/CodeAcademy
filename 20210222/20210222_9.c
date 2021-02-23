/*Задача 9.
Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача. */

#include <stdio.h>
#include <string.h>
enum Etype{VALUE_INT, VALUE_STR};

union Union 
{
    int number;
    char str[32];
};

void print(union Union *pointer, enum Etype value)
{
    char buff[5];
    if (value == VALUE_INT)
    {
        printf("int to str: %s\n", itoa(pointer->number,buff,10));
    }
    else
    {
        printf("string to int: %d\n", atoi(pointer->str));
    }
}

int main(void)
{
    union Union test = {17};
    printValue(&test, VALUE_INT);
    strcpy(test.str, "12");
    printValue(&test, VALUE_STR);
    return 0;
}