#include <stdio.h>
void main()
{
int w;
printf("\n Enter the week:");
scanf("\n %d",&w);
if(w==1)
printf("\n MONDAY");
else if(w==2)
printf("\n TUESDAY");
else if(w==3)
printf("\n WEDNESDAY");
else if(w==4)
printf("\n THURSDAY");
else if(w==5)
printf("\n FRIDAY");
else if(w==6)
printf("\n SATURDAY");
else if(w==7)
printf("\n SUNDAY");
else
printf("\n INVALID");
}
