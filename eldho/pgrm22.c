#include <stdio.h>
void main()
{
int w;
printf("\n Enter the week:");
scanf("\n %d",&w);
switch(w)
{
case 1:
printf("\n MONDAY");
break;
case 2:
printf("\n TUESDAY");
break;
case 3:
printf("\n WEDNESDAY");
break;
case 4:
printf("\n THURSDAY");
break;
case 5:
printf("\n FRIDAY");
break;
case 6:
printf("\n SATURDAY");
break;
case 7:
printf("\n SUNDAY");
break;
default:
printf("\n INVALID");
break;
}
}
