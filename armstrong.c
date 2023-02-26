#include<stdio.h>  
 int main()    
{    
int number,remainder,sum=0,tempnumber;    
printf("enter a number=");    
scanf("%d",&number);    
tempnumber=n;    
while(number>0)    
{    
remainder=number%10;    
sum=sum+(remainder*remainder*remainder);    
n=n/10;    
}    
if(tempnumber==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   
