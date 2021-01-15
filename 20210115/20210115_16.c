#include <stdio.h> 
#define CONST_PI (3.14159)
float area(float r);
int main(void){
   float r;
    printf("Enter the radiius of a circle\n");
    scanf("%f",&r);
    printf("%.2f",area(r));

    return 0;
}
float area(float r){
    float areaCircle;
    areaCircle=CONST_PI*r*r;
    return areaCircle;
}