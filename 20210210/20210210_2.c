/*Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.*/
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