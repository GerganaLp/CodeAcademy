#include <stdio.h>
#include <stdlib.h>
#include <math.h>  
#include <time.h>

int main(void) 
{
    srand((unsigned int)(time(NULL)));
    int i;
    char pass[13]; 

    printf("Press enter to get a twelve-character password\n");
    getchar();

    for (i = 0; i < 4; i++) 
    {
        
        pass[ 3 * i ] = '0' + (rand() % 10);
        char capLetter = 'A' + (rand() % 26); 
        pass[(3 * i) + 1] = capLetter;
        char letter = 'a' + (rand() % 26); 
        pass[(3 * i) + 2] = letter;
    }
    pass[3 * i] = '\0';
    printf("generated password : %s\n\n",pass); 

    printf("\n\n");
}
