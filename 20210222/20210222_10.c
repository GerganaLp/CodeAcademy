/*Задача 10.
Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура. */


#include <stdio.h>
#include <string.h>
/* value description */
enum EType
{
    VALUE_INT,
    VALUE_STR
};
union Union
{
    int number;
    char str[64];
};
struct tagMyValue
{
    enum EType m_type;
    union Union m_var;
};
void printValue(struct tagMyValue *pValue)
{
    if (VALUE_INT == pValue->m_type)
    {
        printf("INT: %d\n", pValue->m_var.number);
    }
    else if (VALUE_STR == pValue->m_type)
    {
        printf("STR: %s\n", pValue->m_var.str);
    }
}
int main()
{
    struct tagMyValue value = {VALUE_INT, 12345};
    printValue(&value);
    value.m_type = VALUE_STR;
    strcpy(value.m_var.str, "test test test");
    printValue(&value);
    return 0;
}