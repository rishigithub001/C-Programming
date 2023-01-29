#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int hcf(int n1, int n2);
int n1,n2;
printf("Enter any two positive integers:");
scanf("%d%d", &n1,&n2);
printf("G.C.D. of the given integers '%d' and '%d' is: %d", n1, n2,hcf(n1,n2));
return 0;
}
int hcf(int n1, int n2)
{
if(n2!= 0)
return hcf(n2,n1%n2);
else
return n1;
}
