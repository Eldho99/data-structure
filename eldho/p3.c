#include<stdio.h>
void main()
{
int *p,a[]={10,20,30,40,50};
int i;
printf(" \n USING INDEX METHOD:");
for(i=0;i<5;i++)
printf("\n %d\t",a[i]);
printf("\n POINTER METHOD:");
for(i=0;i<5;i++)
printf("\n %d\t",*(a+i));
p=&a[0];
printf("\n POINTER METHOD:");
for(i=0;i<5;i++)
printf("\n %d\t",p[i]);
}
