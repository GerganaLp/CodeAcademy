#include <stdio.h>
int clearBit(int num, int index);
int main(){
int num=5;
int index=1;
printf("%d\n",clearBit(num,index));
return 0;
}
int clearBit(int num, int index){
    return (num & (~(1 << (index - 1)))); 

}