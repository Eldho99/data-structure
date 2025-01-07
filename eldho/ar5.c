#include <stdio.h>
void sum1(int a,int b);
void sum2(int a,int b);
void sum3(int a,int b);
void sum4(float a,float b);
void main()
{
int a,b,sp1,sp2,sp3,n;
float sp4;
printf("\n Enter the numbers:");
scanf("%d %d",&a,&b);
printf("\n 1.ADD \n 2.SUB \n 3.MUL \n 4.DIV \n ");
printf("\n Enter the choice:");
scanf("%d ",&n);

switch(n)
{
case 1:sum1(a,b);
       break; 
case 2:sum2(a,b);
       break;
case 3:sum3(a,b);
       break; 
case 4:sum4(a,b);
       break; 
default:printf("\n ERROR \n");
        break;       
}
}
void sum1(int a,int b)
{
int s;
s=a+b;
printf("\n SUM:%d",s);
}

void sum2(int a,int b)
{
int s2;
s2=a-b;
printf("\n SUM:%d",s2);
;
}
void sum3(int a,int b)
{
int s3;
s3=a*b;
printf("\n SUM:%d",s3);;
}

void sum4(float a,float b)
{
float s4;
s4=a/b;
printf("\n SUM:%f",s4);;
}

