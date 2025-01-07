#include <stdio.h>
struct emp
{
int rolno;
char name[20];
int m1,m2,m3;
}s1;
void main()
{
printf("\n ENTER EMPNAME:");
scanf(" %s",s1.name);
printf("\n ENTER EMPID:");
scanf(" %d",&s1.rolno);
printf("\n ENTER AGE:");
scanf(" %d",&s1.m1);
printf("\n Enter SALARY:");
scanf(" %d",&s1.m2);
printf("\n EMPNAME:%s",s1.name);
printf("\n EMPID: %d",s1.rolno);
printf("\n AGE:%d",s1.m1);
printf("\n SALARY:%d",s1.m2);
}
