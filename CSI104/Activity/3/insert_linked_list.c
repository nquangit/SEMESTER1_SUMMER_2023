#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int key;
    struct Node* next;
};
 
void push(struct Node** head_ref, int new_key)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->key = new_key;
 
    new_node->next = (*head_ref);
 
    (*head_ref) = new_node;
}
 
void insertAfter(struct Node* prev_node, int new_data)
{
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }
 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
 
    new_node->key = new_data;
 
    new_node->next = prev_node->next;
 
    prev_node->next = new_node;
}

void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->key);
        current = current->next;
    }
    printf("\n");
}

// Driver code
int main()
{
    // Start with the empty list
    struct Node* head = NULL;
    int x = 500;

    for (int i = 0; i < 10; i++) {
    	push(&head, i);
	}
 
    insertAfter(head, 99);
    printLinkedList(head);
    return 0;
}
