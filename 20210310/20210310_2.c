//Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
//Хвърлете грешка при липса на затварящи скоби и реда на който са.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
FILE *fp;
char c;
char brackets[6] = "{}[]()";
int bracketCounts[6] = {0};
char * found;
int i;


if ((fp = fopen("bracked.txt", "r")) == NULL){
    perror("Error");
    return -1;
}

printf("File opened correctly\n");

// broi razlichni skobi
while ((c = getc(fp)) != EOF){
    found = strchr(brackets, c); //strchr namira pyrvoto poqvqvane na simvol
    if (found != NULL) {
        bracketCounts[found - brackets]++;
    }
}


fclose(fp);

// broqcha na skobi
for (i=0; i < 6; i+=2) {
    if (bracketCounts[i] != bracketCounts[i+1]) {
        printf("Unbalanced parentheses !\n");
        return 0;
    }
}

printf("All parentheses are OK!\n");

return 0;
}