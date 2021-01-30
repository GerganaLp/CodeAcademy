 //Напишете функция, която връща резултат a*2 + b*c.
 #include <stdio.h>
 int function(int a, int b, int c);
 int main(void){
    int a,b,c;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf("c= ");
    scanf("%d",&c);
    printf("Result is %d",function(a,b,c));


     return 0;
 }
 int function(int a, int b, int c){
     return (a*2) + (b*c);
 }