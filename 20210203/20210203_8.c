/*Задача 8.Дефинирайте едномерен масив int с 10 елемента =
{100,90,80,70,60,50,40,30,20,10} Дефинирайте пойнтер, който ще сочи към
масива.
Достъпете 3 тия елемент от масива и му задайте стойност 5.
Достъпете 4 тия елемент и му задайте стойност 33.
Достъпете 5 тия елемент и го намалете със 7.
Достъпете 7 мия елемент и го увеличете с 10.
Достъпете 10 тия елемент и го умножете по 3.
Изпишете го по двата възможни начина и закоментирайте единия.
Принтирайте на екрана всички елементи на масива */
#include <stdio.h>
int main(void)
{
    int arr[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
    int *p; // pointer
    p = arr; //pointra sochi kym masiva
    *(p+2)= 5; // taka pointera sochi kym vtoriq element i go promenq na 5
    *(p+3)=33; 
    *(p+4)-=7;
    *(p+6)+=10; 
    *(p+9)*=3;
   for(int i=0; i<10; i++){
       printf("%d ",*(p+i)); // printirame novite stoinosti
   }

    return 0;
}