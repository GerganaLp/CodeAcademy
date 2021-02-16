/*Задача 3.
Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char */
#include <stdio.h>
int main(void){
    int a=7;
    int *ap=&a;
    *ap=8;
     printf("The value of a= %d\n",a );
    float b=1.2;
    float *bp=&b;
    *bp=2.1;
     printf("The value of b= %2.f\n",b );
    char c='A';
    char *cp=&c;
    *cp='B';
    printf("The value of c= %c",c );


    return 0;
}