#include <stdio.h>
int printArr(int* );
int main(void){
    int arr[100]={0};
    printArr(arr);


    return 0;
}
int printArr(int* arr){
    
    int tmp=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", tmp);
}
