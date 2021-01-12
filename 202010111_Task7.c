#include <stdio.h> 

int main(int num){

   
  int num;

    int mask = 0xAAAAAAAA;
     num = num & mask;
    printf("%d\n", num);

    return 0;
}