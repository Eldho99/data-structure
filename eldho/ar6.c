#include <stdio.h>
struct student
{
int rolno;
char name[20];
int m1,m2,m3;
}s1;
void main()
{
printf("\n Enter name:");
scanf(" %s",s1.name);
printf("\n Enter ROLL NUMBER:");
scanf(" %d",&s1.rolno);
printf("\n Enter MARKS:");
scanf(" %d",&s1.m1);
printf("\n Enter MARKS:");
scanf(" %d",&s1.m2);
printf("\n Enter MARKS:");
scanf(" %d",&s1.m3);
printf("\n NAME: %s",s1.name);
printf("\n ROLL NO.: %d",s1.rolno);
printf("\n MARK: %d",s1.m1);
printf("\n MARK: %d",s1.m2);
printf("\n MARK: %d",s1.m3);
}
