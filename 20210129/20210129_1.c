#include <stdio.h> 
extern const float PI;
float area(float r);

int main(void){
    float r;
    printf("Enter the radiius of a circle\n");
    scanf("%f",&r);
    printf("%.2f",area(r));

    return 0;
}
float area(float r){
    const float PI=3.14;
    return PI*r*r;
}
