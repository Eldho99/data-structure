#include <stdio.h>
void main()
{
char c;
int a,b;
float s;
printf("\n Enter the operator(+,-,/,*:");
scanf("\n %c",&c);
printf("\n Enter the operands:");
scanf("\n %d%d",&a,&b);
switch(c)
{
case '+':
printf("\n %d+%d =%d",a,b,a+b);
break;
case '-':
printf("\n %d-%d =%d",a,b,a-b);
break;
case '*':
printf("\n %d*%d =%d",a,b,a*b);
break;
case '/':
s=a/b;
printf("\n %d/%d =%f",a,b,s);
break;
default:
printf("\n INVALID");
break;
}
}
