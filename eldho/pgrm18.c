#include <stdio.h>
void main()
{
int a;
printf("\n Enter the number:");
scanf("\n %d",&a);

if(a>0)
printf("\n %d is +ve",a);
else if(a<0)
printf("\n %d is -ve",a);
else
printf("\n %d is zero",a);
}
