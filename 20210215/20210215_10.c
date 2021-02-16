/*Задача 10.
Как работи? Дефинираме променлива “а“, дефинираме
пойнтер, но още не му задаваме стойност. Отпечатайте
адреса на “а”. След това присвояваме стойност на
пойнтера, като внимаваме типовете на пойнтера и
променливата да са от един и същи тип. Отпечатваме
на екрана стойността на пойнтера с %р, стойността на
„а“ с %d, стойността на *ptr с %d. */


#include <stdio.h>
int main(void){
    int a=5;
    int *aPtr=&a; // pointer kym promenliva a
    printf("%d\n", &a); //a= adresa
    *aPtr=15; //a=15
    printf("%d\n", a); //15
    printf("pointer value is: %p\n", aPtr); // nqkakvo gadno chislo za pointera
    printf("pointer value is: %d\n", *aPtr);//15

    return 0;
}