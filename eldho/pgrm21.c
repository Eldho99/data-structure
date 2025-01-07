//Electricity bill by NK//
#include <stdio.h>
void main()
{
int u;
float ch,cha,s=0;
char name[10];
printf("\n Enter the name:");
scanf("\n %s", name);
printf("\n Enter the unit:");
scanf("\n %d",&u);
printf("\n ELECTRICITY-BILL \n");
printf("\n Name: %s",name);
if(u>=200)
{
ch=(u*.80)+100;
printf("\n CHARGE:%f/-",ch);
}
else if((u>200)&&(u<=300))
{

ch=(200*.80+(u-200)*.90)+100;
printf("\n CHARGE:%f/-",ch);
}
else if(u>300 && u<=400)
{
ch=((200*.80)+u-200)*.90+(u-300)*1+100;
printf("\n Charge:%f/-",ch);
}
else
{
cha=200*.80+(u-200)*.90+(u-300)*1+100;
s=(15/100)*cha;
ch=s+cha;
printf("\n CHARGE:%f/-",ch);
}
}
