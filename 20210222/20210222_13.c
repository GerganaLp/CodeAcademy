/*Задача 13.
Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.*/
#include <stdio.h>
#include <string.h>
union Union {
unsigned short  m_bitField : 6;
char val:6;
};
int main(){
    union Union test;
    printf("size of union: %d\n",sizeof(test));
    test.m_bitField=7;
    printf("test.m_bitField %d\n", test.m_bitField);
    test.val='g';
        printf("test.val %c\n", test.val);


    return 0;
}