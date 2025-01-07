#include <stdio.h>
void main()
{
char c;
printf("\n Enter the character:");
scanf("\n %c",&c);
switch(c)
{
case 'A'...'Z':
printf("\n Alphabets");
break;
case 'a'...'z':
printf("\n Alphabets");
break;
case '1'...'9':
printf("\n digits");
break;
default:
printf("\n Special character");
break;
}
}
