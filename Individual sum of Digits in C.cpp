#include<stdio.h>
#include<conio.h>
int main()
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
if(n>0){
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum =%d",sum);      
}
else{
	printf("Invalid input");
}   

	
	
	
	
	
	
	
	
	
	
	
	
	
	
}