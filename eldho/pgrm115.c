#include <stdio.h>
void main()
{
int a,b,lar=0;

printf("Enter the 1st number:");
scanf(" %d",&a);
printf("\n Enter the 2nd number:");
scanf("\n %d",&b);
if(a>b)
{
lar=a;
printf("\n LARGEST:%d",lar);
}
else
{
lar=b;
printf("\n LARGEST:%d",lar);
}
}
