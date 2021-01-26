//Пребройте символите, подавани на конзолата, с
//функцията  
//getchar(); 
#include <stdio.h>
int main(void){

    int counter=0;//broqch na bukvi
    int c; //simvol
    c=getchar();//chetem go
    while(c!=EOF){ //fokato ne natisnem ctrl+c za end of file
        c=getchar();//chetem simvoli
        counter++;//dobavqme gi v broqcha
        
    }
    printf("%d",counter);//printirame obshtiq broi
    return 0;
}