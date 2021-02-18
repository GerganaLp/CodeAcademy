/*Задача 13.
Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.  */
#include <stdio.h>
int main(){
    char arr[100];
    char c;
    char *p=arr;
    int i =0;
    while ((c = getchar()) != '\n')
    {
        arr[i] = c;
        i++;
    }
    while(*p){
        printf("%c",*p);
        p--;
    }
    return 0;
}