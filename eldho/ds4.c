
#include <stdio.h>
#include <stdlib.h>
void main(){
int* ptr;
int n, i;
printf("Enter number of elements:");
scanf("%d",&n);
ptr = (int*)malloc(n * sizeof(int));
if (ptr == NULL) 
{
printf("Memory not allocated.\n");
exit(0);
}
else
{
printf("Memory successfully allocated using malloc.\n");
}
for (i = 0; i < n; ++i)
scanf("%d",ptr+i);
printf("The elements of the array are: ");
for(i=0;i<n;i++)
printf("%d", ptr[i]);
}

