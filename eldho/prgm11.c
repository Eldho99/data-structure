#include <stdio.h>
void main()
{
int m1,m2,m3,m4,rolno,tot;
float p;
char name[5];
printf("Enter the name:");
scanf(" %s", name);
printf("\n Enter the roll no.:");
scanf("\n %d",&rolno);
printf("\n Enter the 4 marks (out of 100):");
scanf("%d ",&m1);
scanf("\n %d",&m2);
scanf("\n %d",&m3);
scanf("\n %d",&m4);
tot=m1+m2+m3+m4;
p=(tot*100)/400;
printf("\n STUDENT DETAILS \n");
printf("\n NAME: %s", name);
printf("\n ROLL NO:%d",rolno);
printf("\n PERCENTAGE:%f",p);
}
