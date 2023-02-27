#include<Stdio.h>
#include<conio.h>
float Simple_int(float p,float r,float t)
{
float si;
si= p*r*t/100;
return si;
}
int main()
{
float a,b,c;
float interest;
printf("\nEnter the Principal Amount:\n");
scanf("%f",&a);
if(a<= 10000)
{
printf("Low Amount for Interest prospects!");
return 0;
}
else
printf("\nEnter the Year Period:\n");
scanf("%f",&b);
printf("\nEnter the Rate Percentage:\n");
scanf("%f",&c);
interest= Simple_int(a,b,c);
printf("The Simple Interest sum is: %.3f\n",interest);
return 0;
}
