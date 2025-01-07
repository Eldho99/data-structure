#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* createNode(int data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = createNode(new_data);
    struct Node* last = *head_ref;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;
}

int search(struct Node* head, int key) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return 1;
        }
        current = current->next;
    }
    return 0;
}

int countNodes(struct Node* head) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void printList(struct Node* node) {
    struct Node* last;
    printf("Traversal in forward direction:\n");
    while (node != NULL) {
        printf(" %d ->", node->data);
        last = node;
        node = node->next;
    }
    printf(" NULL\n");
}

void createLinkedList(struct Node** head_ref) {
    int n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        append(head_ref, data);
    }
}

void displayMenu() {
    printf("\nMenu:");
    printf("\n1. Search for a node");
    printf("\n2. Print the list");
    printf("\n3. Count the nodes");
    printf("\n4. Exit");
    printf("\nEnter your choice: ");
}

int main() {
    struct Node* head = NULL;
    int choice, data, key;

    printf("Creating a doubly linked list:\n");
    createLinkedList(&head);

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter data to search for: ");
                scanf("%d", &key);
                if (search(head, key)) {
                    printf("\nItem %d found in the list\n", key);
                } else {
                    printf("\nItem %d not found in the list\n", key);
                }
                break;
            case 2:
                printf("\nLinked list: ");
                printList(head);
                break;
            case 3:
                printf("\nTotal number of nodes: %d\n", countNodes(head));
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice\n");
        }
    }

    return 0;
}                                                                                  

