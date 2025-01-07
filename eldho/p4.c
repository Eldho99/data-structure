#include<stdio.h>
int add1(int *a ,int size);
void add2(int *a ,int size);
void main()
{
int a[5]={10,20,30,40,50};
int sum,i;
sum=add1(a,5);
add2(a,5);
for(i=0;i<5;i++)
printf("\n %d",a[i]);
printf("\n SUM:%d",sum);
}
int add1(int *p,int size)
{
int total,k;
for(k=0;k<5;k++)
total+=p[k]+2;
return total;
}

void add2(int *p,int size)
{
int k;
for(k=0;k<5;k++)
{
p[k]+=2;
printf("%d\t \n",p[k]);
}
}
