/*Задача 15.
Напишете програма аналог на спортния тотализатор. */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void toto(int choice){
    if (choice == 1){
        int min = 5;
        int max = 35;
        for(int i = 0; i < min; i++){
            int n = (rand() % (max - min + 1)) + min;
            printf("%d ", n);
        }
        printf("\n");
    }
    if (choice == 2){
        int min = 6;
        int max = 42;
        for(int i = 0; i < min; i++){
            int n = (rand() % (max - min + 1)) + min;
            printf("%d ", n);
        }
        printf("\n");
    }
    if (choice == 3){
        int min = 6;
        int max = 49;
        for(int i = 0; i < min; i++){
            int n = (rand() % (max - min + 1)) + min;
            printf("%d ", n);
        }
        printf("\n");
    }
}

int main(void){
    srand(time(NULL));
    int choice;
    printf("Select your choice: \n"
    "1 - (5 of 35)\n"
    "2 - (6 of 42)\n"
    "3 - (6 of 49)\n");
    scanf("%d", &choice);
    toto(choice);
    return 0;
}