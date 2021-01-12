#include <stdio.h>
int clearBit(int num, int index);
int main(){
int num=5;
int index=1;
int mask=(1<<index);
int new=num^mask;
printf("%d\n",  new );
return 0;
}
