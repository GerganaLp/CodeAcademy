/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки */
#include <stdio.h>
void lower(char s[]);
int main(void){

    char s[]= "HELOO";
    lower(s);
    printf("%s",s);

    return 0;
}

void lower(char s[]){
    int i;

    for(int i=0; s[i]!='\0'; i++){
        if(s[i]>= 'A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
}