#include<stdio.h>
#include "f10.h"
#include <math.h>

unsigned int commonMultiple(unsigned int a,unsigned int b){
    unsigned int i;

	for (i = a > b ? a : b; i % a != 0 || i % b != 0 ; i++);
    printf("Least Common Multiple: %d\n", i);

}
float Myabs(float a){
    if(a<0){
        return -a;
    }
    else {
        return a;
    }
}
float Mysqrt(int a){
     if(a<0) {
        return sqrt(abs(a)); 
    } else return sqrt(a);
}