#include <stdio.h>
#include <stdlib.h>
//struktura za dyrvodelec
typedef struct Carpenter{
    int longBoard;
    int shortBoard;
    int smallBracket;
    int bigBracket;
    int screw;
}Carpenter;

void input(Carpenter *input); //kakvi materiali ima dyrvodeleca
int shelf(Carpenter *made); //kak se pravi 1 etajerka?

int main(){
    Carpenter *current =malloc(sizeof(Carpenter)); //dinamichna pamet za strukturata
    input(current);
    printf("The carpenter can make %d shelfs",shelf(current));
    free(current); //osvobojdavame pametta
    
    return 0;
}
void input(Carpenter *input){
    printf("Enter number of long boards in store: ");
    scanf("%d", &input->longBoard);
    printf("Enter number of short boards in store: ");
    scanf("%d", &input->shortBoard);
    printf("Enter number of small brackets in store: ");
    scanf("%d", &input->smallBracket);
    printf("Enter number of big brackets in store: ");
    scanf("%d", &input->bigBracket);
    printf("Enter number of screws in store: ");
    scanf("%d", &input->screw);
}
int shelf(Carpenter *made){
    int counter=0;
    while(made->longBoard>=4 && made->shortBoard>=6 && made->smallBracket>=12 && made->bigBracket>=2 && made->screw>=14){
        made->longBoard -=4;
        made->shortBoard -=6;
        made->smallBracket -=12;
        made->bigBracket -=2;
        made->screw -=14;
        counter++;
    }
    return counter;
}
