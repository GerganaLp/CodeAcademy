/*Напишете функцията за добавяне на елемент в дървото рекурсивно
с двоен пойнтер подаван като параметър:
void insertKey(int x, struct tree **T) */

#include"tree.h"
int main(){
    insertKey(17,&root);
    insertKey(23,&root);
    return 0;
}