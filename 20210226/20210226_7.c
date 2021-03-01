/*Задача 7. Напишете масив от структури
 наречен kaytab[ ], като
използвате тази, дефинирана в
 горното упражнение - потребителски тип
key_t, която съдържа символен низ и число.
 Инициализирайте масива с
всички ключови думи на С */

#include <stdio.h>
typedef struct My
{
    char str[16];
    int number;
} key_t;
int main(void)
{

    key_t keytab[32] = {
        {"void", 1},
        {"struct", 2},
        {"main", 3},
        {"auto", 4},
        {"bool", 5},
        {"break", 6},
        {"char", 7},
        {"const", 8},
        {"continue", 9},
        {"do", 10},
        {"default", 11},
        {"double", 12},
        {"else", 13},
        {"enum", 14},
        {"extern", 15},
        {"float", 16},
        {"for", 17},
        {"goto", 18},
        {"if", 19},
        {"inline", 20},
        {"int", 22},
        {"long", 23},
        {"register", 24},
        {"sizeof", 25},
        {"static", 26},
        {"switch", 27},
        {"typedef", 28},
        {"union", 29},
        {"void", 30},
        {"while", 31},
        {"unsigned", 32},
    };

    return 0;
}