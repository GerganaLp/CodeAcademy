#include <stdio.h>
 int isLetter(char c);
 int main(void){
     char c;
     printf("parameter: ");
     c=getchar();
     if( isLetter(c)==1){
        printf("The given char is letter\n");
     }
    else {
       printf("The given char is not letter\n");

    } 
     return 0;
 }
 int isLetter(char c){
    int x;
    scanf("%c",&x);
     if((c > 64 && c < 91) ||(c > 97 && c < 122)){
        x=1; //true
     } else {
        x=0; //false
     }
     
    return x;
 }