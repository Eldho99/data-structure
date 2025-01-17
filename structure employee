#include<stdio.h>
struct employee
{
char empname[20];
int empid;
int salary;
int age;
}e1;
void main()
{
struct employee *ptr;
printf("\n\tEnter employee id : ");
scanf("%d",&e1.empid);
printf("\t Enter employee name :");
scanf(" %s",e1.empname);
printf("\n\tEnter employee salary:");
scanf("%d",&e1.salary);
printf("\n\tEnter employee age:");
scanf("%d",&e1.age);
ptr = &e1;
printf("\n employee Details \n");
printf("EMPID: %d\n", (*ptr).empid);
printf("\n EMPLOYEE NAME : %s", (*ptr).empname);
printf("\n EMPLOYEE SALARY : %d", (*ptr).salary);
printf("\n EMPLOYEE AGE: %d", (*ptr).age);
}
