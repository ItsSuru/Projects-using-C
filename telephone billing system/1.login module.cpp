//LOGIN MODULE FOR TELEPHONE BILLING SYSTEM:

#include<stdio.h>
#include<string.h>
int main()
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
printf("Login Failed \n Again ");

}
}
return 0;
}

