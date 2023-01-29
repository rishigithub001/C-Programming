#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
float S1, S2, S3, Semi, area;
printf("Enter the three sides of the Triangle:   ");
scanf("%f%f%f",&S1,&S2,&S3);
Semi =  (S1 + S2 + S3)/2;
area = sqrt(Semi*(Semi-S1)*(Semi-S2)*(Semi-S3));
printf("The area of Triangle by Heron's Formula is: %.3f\n", area);
return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	