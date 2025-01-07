#include<stdio.h>
void main()
{
int *p,var=5;
p=&var;
printf(" \n VALUE OF VAR:%d",var);
printf("\n ADDRESS OF VAR: %p",p);
printf("\n VALUE OF VAR FROM P: %d",*p);

}
