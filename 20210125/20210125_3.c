//Напишете програма, която преброява шпациите, табулациите и
//новите редове
#include <stdio.h>
int main(void){
    int countSpace=0;  //broqch za space
    int countTab=0;    //broqch za tabove
    int countNl=0;     //broqch za nov red 
    char c=0;           
    c=getchar();       //chetem char
    while(c != EOF){   // dokato ne sme dostignali kraq na faila
        if(c == ' '){   //proverqvame za space, tab, nov red kato ako ima uvelichavame broqcha
            countSpace++;
        } 
        else if(c  == '\t'){
            countTab++;
        }
        else if(c == '\n'){
            countNl++;
            
        } 
        c=getchar();       //nakraq cherem char
    }    
    printf("spases %d, tabs %d,lines %d",countSpace,countTab,countNl); // i gi printirame
    return 0;
}
