#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;
    struct Node* next;
};

void main() {
    struct Node* head = NULL; // Pointer to the head of the linked list
    struct Node* temp = NULL; // Pointer to create new nodes
    struct Node* current = NULL; // Pointer to traverse the list
    int value;

    printf("Enter values to add to the linked list (enter -1 to stop):\n");

    // Loop to enter values
    for (;;) {
        scanf("%d", &value);
        if (value == -1) {
            break; // Stop if the user enters -1
        }

        // Create a new node
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = value;
        temp->next = NULL;

        // If this is the first node
        if (head == NULL) {
            head = temp; // Initialize the head
            current = head; // Set current to the head
        } else {
            // Append to the end of the list
            current->next = temp;
            current = temp; // Move current to the new node
        }
    }

    // Display the linked list
    printf("Linked List:\n");
    for (current = head; current != NULL; current = current->next) {
        printf("%d -> ", current->data);
    }
    printf("NULL\n");

}

