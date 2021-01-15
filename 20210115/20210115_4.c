#include <stdio.h>
int main(void){
    int i;
    char arr[]={ '\t','\n','\r','\v', '\\', '\'', '\"','\?', '\a','\b','\f'};
    for(int i=0;i<sizeof(arr)/sizeof(char); i++){
        printf("Escape character %d '%c'\n", (int)(arr[i]),arr[i]);
        
    }
}