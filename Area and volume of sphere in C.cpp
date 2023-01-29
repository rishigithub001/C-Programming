#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float r;
float area,volume;
printf("Enter the radius of the sphere:\n");
scanf("%f",&r);
area = 4*(3.14)*r;
volume = (4/3)*(3.14)*r*r*r;
printf("The area of the sphere is: %f\n",area);
printf("The volume of the sphere is: %f",volume);
return 0;
}