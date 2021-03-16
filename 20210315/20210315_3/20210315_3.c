/*Задача 3. Да се построи наредено двоично дърво за
търсене чрез последователно добавяне на следните
върхове:
а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14
Да се сравнят получените дървета. Какви изводи могат
да се направят? */
#include "tree.h"
#define MAX_SIZE 13
treeNode_t *tree=NULL;
int main(){
     int arr1[MAX_SIZE] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
    int arr2[MAX_SIZE] = {12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65};
    int arr3[MAX_SIZE] = {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81};
    int arr4[MAX_SIZE] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};
    int arr5[MAX_SIZE] = {28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14};
    int i;
    for (i = 0; i < MAX_SIZE; i++)
    {
        insert(arr1[i], &tree);
        insert(arr2[i], &tree);
        insert(arr3[i], &tree);
        insert(arr4[i], &tree);
        insert(arr5[i], &tree);
    }
    preorder(tree);
    printf("\n");
    preorder(tree);
    printf("\n");
    preorder(tree);
    printf("\n");
    preorder(tree);
    printf("\n");
    preorder(tree);
    printf("\n");
    return 0;
}
