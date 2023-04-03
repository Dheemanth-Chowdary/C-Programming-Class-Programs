#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char un1[20];  
   char un2[20];
   int value;  
   printf("Enter the Username: ");  
   scanf("%s",un1);  
   printf("reEnter the Username : ");  
   scanf("%s",un2);  
   value=strcmp(un1,un2);  
   if(value==0)  
   printf("Username is Valid.");  
   else  
   printf("Username is inValid");  
   return 0;  
}  
