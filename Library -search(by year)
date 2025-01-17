#include <stdio.h>
struct book{
int year;
char title[40];
char author[20];
char isbn[20];
}s1[3];
void main()
{
int i,yr;
for(i=1;i<4;i++)
{
printf("\n ENTER TITLE:");
scanf(" %s",s1[i].title);
printf("\n ENTER AUTHOR:");
scanf(" %s",s1[i].author);
printf("\n ENTER YEAR:");
scanf(" %d",&s1[i].year);
printf("\n ENTER ISBN");
scanf(" %s", s1[i].isbn);
printf("\t");
}
for(i=1;i<4;i++)
{
printf(" \t \n BOOK %d DETAILS",i);
printf("\n NAME: %s",s1[i].title);
printf("\n AUTHOR.: %s",s1[i].author);
printf("\n YEAR:%d",s1[i].year);
printf("\n ISBN: %s",s1[i].isbn);
}
printf("\n ENTER THE SPECFIC YEAR:");
scanf("%d",&yr);
for(i=1;i<4;i++)
{
if(yr==s1[i].year)
printf("\n NAME: %s",s1[i].title);
}
}
