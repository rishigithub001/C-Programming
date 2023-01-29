#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c,peri;
printf("Enter the three sides of the triangle:\n");
scanf("%d%d%d",&a,&b,&c);
peri = a+b+c;
printf("Perimeter of the given triangle is = %d\n",peri);
return 0;
}