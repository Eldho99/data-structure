#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data)
{
 struct Node *newnode=malloc(sizeof(struct Node));
 newnode->data=data;
 newnode->next=NULL;
 return newnode; 
}

void deleteBeg(struct Node** head) {
    struct Node *ptr;
    if(*head==NULL)
    {
     printf("\nLinked List is Empty\n");
     return;
    }
    ptr=*head;
    *head=ptr->next;
    printf("\nDeleted Node is %d\n",ptr->data);
    free(ptr);
    
}

void deleteEnd(struct Node** head)
 {
   struct Node *ptr = *head;
   struct Node *ptr1;
    if (*head == NULL) 
    {
     printf("\nLinked List is Empty\n");
     return;
    }
    if(ptr->next==NULL)
    {
     printf("\nDeleted node is %d",ptr->data);
     *head=NULL;
     free(ptr);
    }
   else{
    
    while(ptr->next != NULL)
     {
        ptr1=ptr;
        ptr = ptr->next;
    }
    printf("\nDeleted node is %d\n",ptr->data);
    ptr1->next=NULL;
    free(ptr);

}
}

void delete(struct Node **head, int data) {
    struct Node *temp = *head;
    struct Node *prev = NULL;

    if (*head == NULL) {
        printf("\nLinked List is Empty\n");
        return;
    }

 
    if (temp != NULL && temp->data == data) {
        *head = temp->next;
        free(temp);
        return;
    }

 
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\nNode with Key does not exist\n");
        return;
    }

    prev->next = temp->next;

    free(temp); 
}


void printList(struct Node *node) {
    while (node != NULL) {
        printf(" %d ->", node->data);
        node = node->next;
    }
    printf(" NULL\n");
}

void main()
{
 int n,e,i,choice,data;
 struct Node *head=NULL;
 struct Node *ptr=NULL;
 printf("\nEnter number of elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nEnter data for node %d:",i+1);
  scanf("%d",&e);
   struct Node *newnode=createNode(e);
   if(head==NULL)
   {
    head=newnode;
   }
   else
   {
    ptr->next=newnode;
   }
   ptr=newnode;
 }
    printf("\nMenu:");
    printf("\n1. Delete from beginning");
    printf("\n2. Delete from end ");
    printf("\n3. Delete from a particular location");
    printf("\n4. Traverse");
    printf("\n5. Exit");
    do{
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
            case 1:
                
                deleteBeg(&head);
                break;
                
            case 2:
                
                deleteEnd(&head);
                break;
                
            case 3:
               printf("\nEnter node to delete:");
                scanf("%d",&data);
                delete(&head,data);
                break;
           
            case 4:
                printf("\nLinked list: ");
                printList(head);
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice\n");
        }
    }while(choice!=5);

}

