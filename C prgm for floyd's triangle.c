#include<stdio.h>
#include<conio.h>
int main()
{
int rows,num= 1,i,j;
printf("Enter the no. of rows:\t");
scanf("%d",&rows);
for(i=0;i<= rows;i++)
{
for(j= 1;j<= i;j++)
{
printf(" %d",num);
num++;
}
printf("\n");
}
return 0;
}

