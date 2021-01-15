#include <stdio.h> 
#define CONST_PI (3.14159)

float areaE(float a,float b);
int main(void){
    float a;
    float b;

     printf("Enter elips parameters \n", a);
     scanf("%f",&a);
     printf("Enter elips parameters \n", b);
     scanf("%f",&b);
     printf("%.2f",areaE(a,b));
     
    return 0;
}
float areaE(float a, float b){
    float areaElipse;
    areaElipse=CONST_PI*a*b;
    return areaElipse;
}