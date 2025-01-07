#include <stdio.h>
void main()
{
int a,b,c;

printf("Enter the 1st number:");
scanf(" %d",&a);
printf("\n Enter the 2nd number:");
scanf("\n %d",&b);
printf("\n Enter the 3rd number:");
scanf("\n %d",&c);
if((a>b)&&(a>c))
{
printf("\n LARGEST:%d",a);
}
else if(b>c)
{
printf("\n LARGEST:%d",b);
}
else
{
printf("\n Largest:%d",c);
}
}
