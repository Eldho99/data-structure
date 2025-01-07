#include <stdio.h>
int sum1(int a,int b);
int sum2();
void sum3(int a,int b);
void sum4();
void main()
{
int a,b,sp1,sp2;
printf("\n case 1:with return and argument \n case 2:with return and without argument \n case 3:with argument and without return \n case 4:without argument and return \n ");
printf("\n Enter the numbers");
scanf("%d %d",&a,&b);
sp1=sum1(a,b);
sp2=sum2();
printf("\n (case 1)SUM:%d \n",sp1);
printf("\n (case 2)SUM:%d \n",sp2);
sum3(a,b);
sum4();
}

int sum1(int a,int b)
{
int s;
s=a+b;
return s;
}

int sum2()
{
int s2,x,y;
printf("\n (Case 2) Enter 2 numbers:");
scanf("\n %d %d ",&x,&y);
s2=x+y;
return s2;
}
void sum3(int a,int b)
{
int s3;
s3=a+b;
printf("\n (Case 3)SUM:%d \n",s3);
}

void sum4()
{
int s4,c,d;
printf("\n (Case 4) Enter 2 numbers:");
scanf("\n %d %d ",&c,&d);
s4=c+d;
printf("\n (Case 4)SUM:%d \n",s4);
}

