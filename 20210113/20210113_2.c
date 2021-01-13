#include <stdio.h>
void bin(unsigned n) ;
void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}

int main(void){
    unsigned n;
    bin(n);
     printf("%d\n ",n);
    return 0;
} 