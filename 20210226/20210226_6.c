/*Задача 6. Напишете структура с потребителски тип key_t,
 която
съдържа символен низ и число */

#include <stdio.h>
typedef struct My {
    char str[16];
    int number; 
}key_t;
int main(void){
    key_t test={ "gergana",17};
    printf("My: %s %d\n",test.str,test.number);
    return 0;
}