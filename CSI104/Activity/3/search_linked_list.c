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
 
bool search(struct Node* head, int x)
{
    if (head == NULL)
        return false;

    if (head->key == x)
        return true;
        
    return search(head->next, x);
}
 
// Driver code
int main()
{
    // Start with the empty list
    struct Node* head = NULL;
    int x = 44;

    for (int i = 0; i < 100; i++) {
    	push(&head, i);
	}
 
    search(head, x)? printf("Yes") : printf("No");
    return 0;
}
