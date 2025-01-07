#include <stdio.h>
void main()
{
int m,rolno;
char name[10];
printf("Enter the name:");
scanf("\n %s", name);
printf("\n Enter the rolno:");
scanf("\n %d",&rolno);
printf("\n Enter the mark(out of 100):");
scanf("\n %d",&m);
if(m<50)
printf("\n FAILED");
else if((m>=50)&&(m<60))
printf("\n C GRADE");
else if((m>=60)&&(m<70))
printf("\n B GRADE");
else if((m>=70)&&(m<80))
printf("\n B+ GRADE");
else if((m>=80)&&(m<90))
printf("\n A GRADE");
else
printf("\n A+ GRADE");
}
