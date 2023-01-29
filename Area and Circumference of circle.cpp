#include<stdio.h>
int main()
{
float radius, area, cf;
printf("Enter radius of the circle:\n");
scanf("%f",&radius);
area = 3.14*radius*radius;
printf("The Area of the circle is: %f\n",area);
cf =3.14*2*radius;
printf("The Circumference of the circle is: %f",cf);
return 0;
}