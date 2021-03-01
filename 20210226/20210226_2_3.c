/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера
Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип */ 
#include <stdio.h>

int main(void){
    typedef long long int test;
    test tmp=15631655120;
    printf("%lld\n",tmp);
    typedef test* ptr_test;
    ptr_test pointer=&tmp;
    printf("%lld",*pointer);

    return 0;
}