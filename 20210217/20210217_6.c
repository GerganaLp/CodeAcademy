/*Задача 6.
Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ...." */
#include <stdio.h>
int number(char *str);
int main(void){
    
char str[100]= "This is a string to test my idea for search in a char and";
printf("number of a in array is: %d ",number(str));


    return 0; 
}
int number(char *str){
int count=0;
int i;
for( i=0; str[i]!= '\0'; i++){
    if(str[i]=='a'){
        count++;
    }
}
return count;


}