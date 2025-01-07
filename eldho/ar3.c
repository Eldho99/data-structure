#include <stdio.h>
void main()
{
int a[5],i,n,sum=0;
printf("\n Enter the no.of elements");
scanf("%d",&n);
printf("\n Enter the elements");
for(i=0;i<n;i++)
scanf("\n%d",&a[i]);
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\n SUM:%d",sum);
}
