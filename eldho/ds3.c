#include <stdio.h>
#include <stdlib.h>
struct person{
int w;
int age;
char name[10];
};

void main()
{
int n,i;
struct person *ptr;
printf("\n Enter no.of persons:");
scanf("%d",&n);
ptr = (struct person*) malloc(n * sizeof(struct person));
for(i=0;i<n;i++)
{
printf("\n NAME:");
scanf(" %s",(ptr+i)->name);
printf("\n AGE:");
scanf(" %d",&(ptr+i)->age);
printf("\n WEIGHT:");
scanf("%d",&(ptr+i)->w);
}
for(int i=0;i<n;i++)
{
printf("\n NAME: %s ", (ptr+i)->name);
printf("\n \t AGE:%d",(ptr+i)->age);
printf("\n \t WEIGHT: %d",(ptr+i)->w);
}
}

