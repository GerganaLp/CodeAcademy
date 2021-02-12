/*Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата */
#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int *pValue=NULL;
    unsigned uSize=0;
    printf("Enter size: ");
    scanf("%u", &uSize);
    pValue=(int*)malloc(uSize *sizeof(int));
    if(NULL==pValue){
        printf("error\n");
        exit(1);
    }
    printf("Addres of alocated memory: %p\n", pValue);
    printf("Enter the new size ");
    scanf("%u", &uSize);
    pValue=realloc(pValue, uSize* sizeof(int));
    printf("Addres of realocated memory: %p\n", pValue);
    free(pValue);
    return 0;
}
