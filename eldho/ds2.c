#include<stdio.h>
struct book
{
char bookname[20];
int year;
char author[10];
char isbn[10];
}b1;
void main()
{
struct book *ptr;
ptr=&b1;
printf("\n\tEnter  Isbn: ");
scanf(" %s",ptr->isbn );
printf("\t Enter Book Name :");
scanf(" %s",ptr->bookname);
printf("\n\tEnter Author:");
scanf(" %s",ptr->author);
printf("\n Enter Year:");
scanf("%d",&ptr->year);
printf("\n Book Details \n");
printf("\n BOOK NAME: %s\n", ptr->bookname);
printf("\n BOOK ISBN: %s",ptr->isbn);
printf("\n AUTHOR: %s",ptr->author);
printf("\n YEAR: %d",ptr->year);
}
