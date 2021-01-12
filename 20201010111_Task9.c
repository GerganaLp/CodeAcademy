#include <stdio.h>
int main(){
    int number;
    scanf("%d\n", &number);
    //trqbva mi maska 11111000= 248
    int mask=248;
    int new=number &mask;
    printf("%d\n", new);
}