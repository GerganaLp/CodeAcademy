#include <stdio.h> 
#define CONST_PI (3.14159)
float area(float r);
int main(void){
   float r=1.5;
   printf("%.2f",area(r));
    printf("\n");
   float r1=1;
   printf("%.2f",area(r1));
   printf("\n");
    float r2=13;
   printf("%.2f",area(r2));
    printf("\n");
    return 0;
}
float area(float r){
    float areaCircle;
    areaCircle=CONST_PI*r*r;
    return areaCircle;
}
