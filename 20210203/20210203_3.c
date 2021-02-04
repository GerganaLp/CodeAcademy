/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1 */
#include <stdio.h>
int linSearch(int a[], int l, int d);
int main(void){
    int a[]={1,2,3,4,5,6,7};
    int l=sizeof(a)/sizeof(a[0]);
    int d=2;
   
    printf("The result is: %d ",linSearch(a,l,d));
    
    return 0;

}
int linSearch(int a[], int l, int d){
    int i;
    for(i=1; i< l; i++){
        if(a[i]== d){
            return i;
        }
        return -1;
    }
}