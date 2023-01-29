#include<stdio.h>
#include<conio.h>
int main()
{
float base(cm),height(cm);
printf("Enter the base and height of the triangle:");
scanf("%f%f",&base,&height);
float area = (base*height)/2;
printf("Area of Triangle is : %0.2f", area);
return 0; 
}