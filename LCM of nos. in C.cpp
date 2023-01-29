#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,max;
printf("Enter the two numbers:");
scanf("%d%d",&a,&b);
max = (a>b)?a:b;
while(max%a!=0||max%b!=0)
{
max++;
}
printf("the LCM of the given two numbers(%d and %d) is: %d",a,b,max);
return 0;
}