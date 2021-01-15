#include <stdio.h>
   const char newLine='\n';
    const unsigned loop=1024*0xFFFF;
    const double value=1.0L/3.0;
int main(void){
 printf( "constant: loop=%d%c",loop,newLine);
 printf("constant: value=%lf %c", value, newLine);
 return 0;

}