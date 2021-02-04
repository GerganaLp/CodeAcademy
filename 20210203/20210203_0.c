#include <stdio.h>
unsigned Factorial(unsigned uValue);
unsigned Factorial(unsigned uValue)
{
    if (uValue < 2)
    {   
        return 1;
    }
    else
    {
        return uValue * Factorial(uValue - 1);
    }
}
int main(void){
        
        printf("result: %d ", Factorial(3));
        return 0;

    } 