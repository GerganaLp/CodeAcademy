/*Задача 12.

Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
}
*/
#include <stdio.h>
#define GENERIC_MAX(a,b)  a > b ? a : b

int main(){
    int i1 = 1, i2 = 7;
    printf("Max Integer = %d\n", GENERIC_MAX(i1, i2));

    float f1 = 1.123, f2 = 3.123;
    printf("Max Float = %f\n", GENERIC_MAX(f1, f2));

    char c1 = 'G', c2 = 'L';
    printf("Max Character = %c\n", GENERIC_MAX(c1, c2));
}
