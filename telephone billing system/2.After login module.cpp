#include<stdio.h>
#include<string.h>
int password()
{
char usname[25],password[10],p[]="suru19",u[]="suru",i;
int result1 ,result2;
printf("\n=======================================\n");
printf("\t TELEPHONE BILLING SYSTEM \n ");
printf("\n=======================================\n");
for(;;)
{
printf("Enter the username:");
scanf("%s",&usname);
printf("\n=======================================\n");
printf("Enter the password:");
scanf("%s",&password);
printf("\n=======================================\n");
result1=strcmp(usname,u);
result2=strcmp(password,p);
if(result1==0 && result2==0)
{
printf("\n=======================================\n");
printf("Login Succesfull\n");
printf("\n=======================================\n");
break;
}
else
{
printf("\n=======================================\n");
printf("Login Failed \n Again ");
printf("\n=======================================\n");
printf("\n=======================================\n");
}
}
return 0;
}
int mainmenu()
{
int choice;
printf("enter choice\n");
printf("\n=======================================\n");
printf("\n 1.admin \n 2.user \n 3.delete \n 4.search \n ");
printf("\n=======================================\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\n admin module");
printf("enter choice\n");
printf("\n 5.user list \n 6.add user \n ");
printf("\n=======================================\n");
scanf("%d",&choice);
switch(choice)
case 5:
printf("user list");
printf("\n=======================================\n");
break;
case 6:
printf("add user");
printf("\n=======================================\n");
break;
case 2:
printf("\n user module\n");
printf("\n=======================================\n");
printf("enter choice\n");
printf("\n 5.contacts \n 6.bill\n ");
printf("\n=======================================\n");
scanf("%d",&choice);
switch(choice)
case 7:
printf("\n contacts");
printf("\n=======================================\n");
break;
case 8:
printf("\n bill module");
printf("\n=======================================\n");
break;
case 3:
printf("\n delete module");
printf("\n=======================================\n");
break;
case 4:
printf("\n search module");
printf("\n=======================================\n");
break;

}
}
int main()
{
password();
mainmenu();
}

