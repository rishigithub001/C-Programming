#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n= 5;
for(i= 1;i<= n;i++)
{
for(j= 1;j<= i;j++)
{
printf("\n");
}
for(i= n-1;i>= 1;i--)
{
for(j= 1;j<= 1;j++)
{
printf("1");
}
printf("\n");
}
return 0;
}


