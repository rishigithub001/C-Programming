#include<stdio.h>
#include<conio.h>
int main()
{
int total_marks, marks_secured;
float percentage;
printf("What is your secured total: "); 
scanf("%d",&marks_secured);
total_marks = 600;
percentage = (float)marks_secured/total_marks *100.0;
printf("percentage = %.3f%%", percentage);
return 0;	
	
	
	
	
	
	
	
}