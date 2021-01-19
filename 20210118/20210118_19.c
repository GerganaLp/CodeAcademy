#include <stdio.h>
int main(void){
int A=0;
int B=0;
if(!(A && B) == !A || !B){
    printf("Condition 1 is true for A=0, B=0\n");
}
else {
    printf("Condition 1 is false for A=0, B=0\n");

}
if(!(A || B) == !A || !B){
    printf("Condition 2 is true for A=0, B=0\n");
}
else {
    printf("Condition 1 is false for A=0, B=0\n");

}

A=0;
B=1;
if(!(A && B) == !A || !B){
    printf("Condition 1 is true for A=0, B=1\n");
}
else {
    printf("Condition 1 is false for A=0, B=1\n");

}
if(!(A || B) == !A || !B){
    printf("Condition 2 is true for A=0, B=1\n");
}
else {
    printf("Condition 1 is false for A=0, B=1\n");

}

A=1;
B=0;
if(!(A && B) == !A || !B){
    printf("Condition 1 is true for A=1, B=0\n");
}
else {
    printf("Condition 1 is false for A=1, B=0\n");

}
if(!(A || B) == !A || !B){
    printf("Condition 2 is true for A=1, B=0\n");
}
else {
    printf("Condition 1 is false for A=1, B=0\n");

}

A=1;
B=1;
if(!(A && B) == !A || !B){
    printf("Condition 1 is true for A=1, B=1\n");
}
else {
    printf("Condition 1 is false for A=1, B=1\n");

}
if(!(A || B) == !A || !B){
    printf("Condition 2 is true for A=1, B=1\n");
}
else {
    printf("Condition 1 is false for A=1, B=1\n");

}
return 0;
}