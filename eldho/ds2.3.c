#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void main()
{
struct node *head=NULL;
struct node *first;
struct node *second;
struct node *third;
struct node *fourth;
struct node *fifth;
first=malloc(sizeof(struct node));
second=malloc(sizeof(struct node));
third=malloc(sizeof(struct node));
fourth=malloc(sizeof(struct node));
fifth=malloc(sizeof(struct node));
first->next=second;
first->data=10;
head=first;
second->next=third;
second->data=20;
third->next=fourth;
third->data=30;
fourth->next=fifth;
fourth->data=40;
fifth->next=NULL;
fifth->data=50;
printf("%p->%d->%d->%d->%d->%d->%p",head,first->data,second->data,third->data,fourth->data,fifth->data,fifth->next);
}


