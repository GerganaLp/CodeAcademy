#include "tree.h"
treeNode_t *insert(int d)
{
    treeNode_t *tmp = (treeNode_t
                           *)malloc(sizeof(treeNode_t));
    treeNode_t *current = NULL;
    treeNode_t *parent = NULL;
    tmp->data = d;
    tmp->right = tmp->left = NULL;
    if (NULL == root)
    {
        root = tmp;
    }
    else
    {
        current = root;
        while (1)
        {
            parent = current;
            if (d < parent->data)
            {
                current = current->left;
                if (current == NULL)
                {
                    parent->left = tmp;
                    return tmp;
                }
            }
            else
            {
                current = current->right;
                if (current == NULL)
                {
                    parent->right = tmp;
                    return tmp;
                }
            }
        }
    }
}
void preorder(treeNode_t *n)
{
    if (n)
    {
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}
treeNode_t *search_iter(treeNode_t *t, int n)
{
    while ((t != NULL) && (t->data != n))
    {
        if (t->data < n)
            t = t->right;
        else
            t = t->left;
    }
    return t;
}

treeNode_t *search(int d)
{
    treeNode_t *current = root;
    printf("Visiting elements: ");
    while (current->data != d)
    {
        if (current != NULL)
            printf("%d ", current->data);
        if (current->data > d)
            current = current->left;
        else
            current = current->right;
        if (current == NULL)
            return NULL;
    }
    return current;
}
int del(int n)
{
    treeNode_t *current = search(n);
    treeNode_t *parent = current;
    if (current->right == NULL && current->left != NULL)
    {
        printf("del =%d\n", current->left->data);
        current = current->left;
        Sleep(100000);
        free(current);
        parent->left = NULL;
    }
    else if (current->right != NULL && current->left == NULL)
    {
        current = current->right;
        free(current);
        parent->right = NULL;
    }
}
//funkciqta za 2zad
void insertKey(int x, treeNode_t **t)
{
    treeNode_t *tmp = NULL;
    if (!(*t))
    {
        tmp = (treeNode_t *)malloc(sizeof(treeNode_t));
        tmp->left = tmp->right = NULL;
        tmp->data = x;
        *t = tmp;
        return;
    }
    if (x < (*t)->data)
    {
        insertKey(x, &(*t)->left);
    }
    else if (x > (*t)->data)
    {
        insertKey(x, &(*t)->right);
    }
}
treeNode_t *search_rec(treeNode_t *t, int n)
{
    if (t != NULL)
        if (t->data < n)
            t = search_rec(t->right, n);
        else if (t->data > n)
            t = search_rec(t->left, n);
    return t;
}