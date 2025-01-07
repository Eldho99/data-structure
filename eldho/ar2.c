#include <stdio.h>
void main()
{
int a[5],i,n;
printf("\n Enter the no.of elements");
scanf("%d",&n);
printf("\n Enter the elements");
for(i=0;i<n;i++)
scanf("\n%d",&a[i]);
for(i=n-1;i>=0;i--)
printf("\n%d",a[i]);
}
