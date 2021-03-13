#pragma pack(1)
#include <stdio.h>
#include <stdlib.h>
extern Node *start;
typedef struct Node {
int data;
Node* next;
} Node;
void init(void);
int add(int data);
void deleteNode(struct Node **head_ref, int position);
void printList(struct Node *node);