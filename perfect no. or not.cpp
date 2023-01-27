#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
printf("enter a number to check perfect or not:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%1==0)
sum-sum+i;
}
if(sum==n)
printf("%d is perfect number",n);
else
printf("%d is not a perfect number",n);
}