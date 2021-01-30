#include <stdio.h>
#include "f9.h"
int function(int a,int b){
    return function2(a,b)/2;
}
int function2(int a,int b){
    return (2*function3(a,b))-1;
}
int function3(int a,int b){
    return a-b;
}
