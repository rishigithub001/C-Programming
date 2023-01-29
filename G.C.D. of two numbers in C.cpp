#include<stdio.h>
#include<conio.h>
int main()
{
int n1, n2, i, gcd;
printf("Enter integer 1:");
scanf("%d",&n1);
printf("\nEnter integer 2:");
scanf("%d",&n2);
for(i=1;i<= n1 && i<= n2;++i)
{
if(n1%1==0 && n2%i==0)
gcd=i;
}
printf("G.C.D. of %d and %d is: '%d'", n1, n2, gcd);
}