/*Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред. */

#include <stdio.h>
#include <string.h>
void reverse(char s[]);
int main(void){
    char s[]= "Code Acadedmy";
    reverse(s);
    return 0;
}
void reverse(char s[]){
    for(int i=strlen(s)-1; i>= 0; i--){
        printf("%c",s[i]);
    }
}
