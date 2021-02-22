/*Задача 8.
Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число. */

#include <stdio.h>
#include <string.h>
enum Etype{VALUE_INT, VALUE_STR};
void print(union Union *pointer);
union Union 
{
    int number;
    char str[32];
};

void printValue(union Union *pointer)
{
    if (VALUE_INT == pointer->number)
    {
        printf("INT: %d\n", pointer->number);
    }
    else if (VALUE_STR == pointer->str)
    {
        printf("STR: %s\n", pointer->str);
    }
}

int main()
{
  
    union Union try={17};
    printValue(&try);
    strcpy(try.str, "test test test");
    printValue(&try);
    return 0;
}