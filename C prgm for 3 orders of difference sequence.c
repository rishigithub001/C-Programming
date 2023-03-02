#include<stdio.h>
#include<conio.h>
int main()
{
int a[25],d1[24],d2[23],d3[22],i;
printf("Enter 25 elements:\n");
for(i=0;i<= 24;i++)
scanf("%d",&a[i]);
printf("\nA:");
for(i=0;i<= 24;i++)
printf("%d",a[i]);
printf("\n\n ist,2nd and 3rd differences are:\n");
printf("\nD1:");
for(i=0;i<=23;i++)
{
d1[i]= a[i+1]-a[i];
printf("%d",d1[i]);
}
printf("\nD2:");
for(i=0;i<=22;i++)
{
d2[i]= d1[i+1]-d1[i];
printf("%d",d2[i]);
}
printf("\nD3:");
for(i=0;i<=21;i++)
{
d3[i]=d2[i+1]-d2[i];
printf("%d",d3[i]);
}
return 0;
}

