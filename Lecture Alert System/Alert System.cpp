#include <stdio.h>
#include <time.h> 
#include <unistd.h>
#include <stdlib.h>
int password()
{
char usname[25],password[10],p[]="swaraj",u[]="suyog",i;
int result1 ,result2;
printf("\n=======================================\n");
printf("\t LECTURE ALERT SYSTEM \n ");
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
printf("Login Failed \n Please try Again ");
printf("\n=======================================\n");
printf("\n=======================================\n");
}
}
return 0;
}
int classes()
{
    int hour, minute, second;
    hour=minute=second=0;
    while(1)
   {
          
        printf("\n=======================================\n");
        printf("%02d : %02d : %02d ",hour,minute,second);
        printf("\n=======================================\n");
        
        second++;
        if(second==60){
            minute+=1;
            second=0;      
        }
        if(minute==60){
            hour+=1;
            minute=0;
        }
        if(hour==24){
            hour=0;
            minute=0;
            second=0;
        }
        if(minute==1){  
          printf("\nYOUR CLASS IS IN F-07\n");
          printf("\nBHAGWAT THAKRAN\n");
          printf("\nMATHEMATICS\n");
          printf("\n=======================================\n");
        }
        if(minute==2){
          printf("\n=======================================\n");    
          printf("\nYOUR CLASS IS IN E-12\n");
          printf("\nAPEKSHA SAKHARE\n");
          printf("\nMPTR\n");
          printf("\n=======================================\n");
         
        }
        if(minute==3){
          printf("\n=======================================\n");    
          printf("\nYOUR CLASS IS IN B-04\n");
          printf("\nUMA YADAV\n");
          printf("\nDBMS\n");
          printf("\n=======================================\n");
        }
        if(minute==4){
          printf("\n=======================================\n");    
          printf("\nYOUR CLASS IS IN F-07\n");
          printf("\nPRIYANKA SHARMA\n");
          printf("\nBEC\n");
          printf("\n=======================================\n");
        }
        if(minute==5){
          printf("\n=======================================\n");    
          printf("\nYOUR CLASS IS IN INCUBATION CNT\n");
          printf("\nRAVI KUMAR TIWARI\n");
          printf("\nEDP\n");
          printf("\n=======================================\n");
        }
        sleep(1);   
    }
    return 0;
}
int main()
{
password();    
classes();   
}

