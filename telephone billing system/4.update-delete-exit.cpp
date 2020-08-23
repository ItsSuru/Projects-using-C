#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

char username[15];
char password[12];

int Password();
int MainMenu();
int AddMember();
void Display();
void serrec();
void update();

int main()
{
Password();
return 0;
}

int Password()
{
system("cls");
printf("\n=============================================================\n");
printf("\n TELEPHONE BILLING SYSTEM \n");	
printf("\n=============================================================\n");
printf("Enter your username:\n");
    scanf("%s",&username);
printf("\n=============================================================\n");
    printf("Enter your password:\n");
    scanf("%s",&password);
printf("\n=============================================================\n");    
 
    if(strcmp(username,"swaraj")==0||strcmp(username,"suru")==0)
{
        if(strcmp(password,"123")==0||strcmp(password,"321")==0)
{
        printf("\nWelcome...Login Success!");
printf("\n=============================================================\n");         
        MainMenu();
}
else
{
printf("\nWrong password");
Password();
}
    }
else
{
     printf("\nUser doesn't exist");
Password();
printf("\n=============================================================\n");
}
return 0;
}
int MainMenu()
{
int c;
while(1)
{
printf("=============================================================\n");
printf("\nSelect Options \n1.Add customer \n2.Delete customer \n3.Search customer \n4.Display customers \n5.update \n6.exit \n" );
scanf("%d",&c);
printf("=============================================================\n");
switch(c)
{
case 1:
printf("\nAdding customer");
AddMember();
break;
case 2:
printf("\nDeleting customer");
break;
case 3:
printf("\nSearching customer");
serrec();
break;
case 4:
printf("\nDisplay customers");
Display();
break;
case 5:
printf("\nUpdate customer");
update();
break;
case 6:
printf("\nApplication Closed");
exit(0);
break;
default:
printf("\nWrong Selection");
printf("\n=============================================================\n");

break;
}
}return 0;
}


struct Member
{
int id;
char Name[20];
}m;

int AddMember()
{printf("\n=============================================================\n");
    FILE *fp;
    printf("\nWelcome To Add Record");
 printf("\n=============================================================\n");   
    fp=fopen("customer.txt","a");
    printf("\nEnter customer Id : ");
    scanf("%d",&m.id);
    
    printf("\nEnter customer name :");
    scanf("%s",&m.Name);
 printf("\n=============================================================\n");
    fwrite(&m,sizeof(m),1,fp);
    fclose(fp);
    printf("\nRecorded Successfully");
 printf("\n=============================================================\n");
}

void Display()
{
printf("\n=============================================================\n");
FILE *fp;
fp = fopen("customer.txt","r");
if(fp==NULL)
{
printf("\nFile Does Not Exist");
printf("\n=============================================================\n");

}
fseek(fp,0,SEEK_SET);
printf("\n\tCustomerID \t\tCustomerName  ");
while(fread(&m,sizeof(m),1,fp)!=NULL)
{
printf("\n\t%d\t\t%s",m.id,m.Name);
}
fclose(fp);
printf("\nEnter any key");
printf("\n=============================================================\n");

}

void serrec()
{
	FILE *fp;
	int i, ser , found = 0;
    struct Member m;
    printf("\nEnter Customer ID :  ");
    scanf(" %d",&ser);
    fp = fopen("customer.txt","r");
    if(fp == NULL)
    {
    	printf("\nFile does not exist");
    	exit(0);
	}
	fseek(fp,0,SEEK_SET);
	while(fread(&m,sizeof(m),1,fp)!=NULL )
	{
		if(m.id ==ser)
		{
			found = 0;
			printf("\n=============================================================\n");
			printf("\nRecord Found\n");
			printf("\n\tCustomerID \t\tCustomerName  ");
			printf("\n\t%d\t\t\t%s",m.id,m.Name);
			break;
		}
	}
	if(found == 0)
	{
		
	    fclose(fp);
		printf("\nRecord not found\n");
	}
}
void update()
{

FILE *fp;
int i, ser , found = 0;
    struct Member m;
    printf("\nEnter Customer ID :  ");
    scanf(" %d",&ser);
    fp = fopen("customer.txt","rb+");
    if(fp == NULL)
    {
    printf("\nFile does not exist");
    exit(0);
}
fseek(fp,0,SEEK_SET);
while(fread(&m,sizeof(m),1,fp)==1 )
{
if(m.id ==ser)

{

printf("\nEnter Customer Name : ");
scanf("%s",m.Name);
fseek(fp,sizeof(m),SEEK_CUR);
found = fwrite(&m,sizeof(m),1,fp);
printf("\n=============================================================\n");
printf("\nRecord Updated Successfully\n");
printf("\n\tCustomerID\t\tCustomerName  ");
printf("\n\t%d\t\t%s",m.id,m.Name);
printf("\n=============================================================\n");


break;
}
}
fclose(fp);
if(found == 0)
{
   
   printf("\nRecord not found\n");
}
}



