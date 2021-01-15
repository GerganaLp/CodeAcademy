
#include <stdio.h>
int main(void){
    printf("character literals: '%c', '%c', '%c' \n", '\041','\x3A', 'Z');
    printf("Integer literals: %d,%d,%ld \n",123,0XFF,12345678901234ULL);
    printf("Floating-point literals: %lf,%lf,%lg,%lf \n",1.23,12234.5678,123E-12,123E+28);
    printf("String literals: \" %s\",  \"%s\",\" %s\"  \n", "xxx", "yyy","zzz");
    return 0;
}
