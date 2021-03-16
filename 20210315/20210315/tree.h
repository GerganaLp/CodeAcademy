#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode_t treeNode_t;
typedef struct treeNode_t{
int data;
treeNode_t *left;
treeNode_t *right;
}treeNode_t;

extern treeNode_t *root;

treeNode_t *insert(int d);

void preorder(treeNode_t *n);

treeNode_t *search_iter(treeNode_t *t, int n);

treeNode_t *search(int d);

int del(int n);
void insertKey(int , struct treeNode_t **); //funkciq za zad2
treeNode_t *search_rec(treeNode_t *, int ); //funkciq za zad5
