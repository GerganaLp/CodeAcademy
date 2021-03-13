#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
 

void push(struct Node** head_ref, int new_data)
{
 
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
 
    
    new_node->data = new_data;
 
    // link the old list
    // off the new node
    new_node->next = (*head_ref);
 
    // move the head to point
    // to the new node
    (*head_ref) = new_node;
}
 

int GetNth(struct Node* head, int index)
{
 
    struct Node* current = head;
 

    int count = 0;
    while (current != NULL) {
        if (count == index)
            return (current->data);
        count++;
        current = current->next;
    }
 

    assert(0);
}
 

int main()
{
 

    struct Node* head = NULL;
 
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);
    push(&head, 7);
    push(&head, 8);
    push(&head, 9);
    push(&head, 10);
    push(&head, 11);
    push(&head, 12);
    push(&head, 13);
    push(&head, 14);
 

    printf("Element at index 10 is %d", GetNth(head,10));
    getchar();
}