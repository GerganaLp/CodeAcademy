/*Задача 5. Да се напише рекурсивен вариант на
функцията за обхождане на двоично дърво. */
#include "tree.h"

treeNode_t *root = NULL;

int main(void)
{

    int arr[11] = {6, 5, 3, 1, 10, 8, 7, 13, 11, 12, 14};
    int i;
    for (i = 0; i < 11; i++)
    {
        insert(arr[i], &root);
    }
    treeNode_t *T = searchRec(root, 13);
    printf("Recursively search tree :%d", T->data);

    return 0;
}
