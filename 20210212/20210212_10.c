/*Задача 10*.
Реализация на масив с променлива размерност
Тази задача е подобна на задача 2, където
използваме char масив. Тук може да използвате
друг тип. */

#include <stdio.h>
#include <stdlib.h>


int main(void){

    int size,newsize,*p;
    printf("Enter a size for the array: \n");
    scanf("%d",&size);
    p = (int*)malloc(size * sizeof(int));
    if (p == NULL){
        printf("Memory not allocated\n");
        exit(1);
    }
    printf("Addresses of allocated memory: %p\n", p);
    printf("Enter the new size:\n");
    scanf("%d",&newsize);
    p = (int*)realloc(p,newsize*sizeof(int));
    printf("Addresses of reallocated memory: %p\n", p);

    return 0;
}
