#include "20210312_1.h"
extern Node* start;

int main() {

  
  

    struct Node* head = NULL; 
  
    add(7); 
    
    puts("Created Linked List: "); 
    printList(head); 
    deleteNode(&head, 4); 
    puts("\nLinked List after Deletion at position 4: "); 
    printList(head); 

    return 0;
}