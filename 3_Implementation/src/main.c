#include<stdio.h>
#include<conio.h>
#include<string.h> 
#include<time.h> 
#include<stdlib.h>
#include"dev.h" 
person;
int main()
{     
person.roomno =0; 
person.billprice =0;     
person.program = "notchosen";     
printf(".............WELCOME TO GHUMTEE RIVIERA RESTAURANT AND LODGE..............\n");     
printf("Please enter your details before moving to the main page!\n");     printf("please enter your name:");     
gets(person.name);     
printf("enter your address:");     
gets(person.address);     
printf("enter your nationality:");     
gets(person.nationality);     
printf("enter your email_id:");     
gets(person.email_id);     
system("cls");     
time_t timer = time(NULL); 
begin();     
return 0;     
} 
