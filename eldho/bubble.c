#include<stdio.h>
void main()
{
int a[10],i,j,n,temp;
printf("enter the number of elements \n");
scanf("%d",&n);
printf("\n enter the elements");
for(i = 0; i < n; i++)
{
scanf("%d",&a[i]);
} 
printf("\n array before sorting \n");
for(i = 0; i < n; i++)
{
printf("%d",a[i]);
} 
for(i = 0; i < n-1; i++)
{
for(j = 0; j < n-i-1; j++)
{
if( a[j] > a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
printf("\narray after sorting\n");
for(i = 0; i < n; i++)
{
printf("%d",a[i]);
}
printf("\n"); 
}

