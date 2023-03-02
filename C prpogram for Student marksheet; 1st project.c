#include <stdio.h>
struct student 
{
    char name[50];
    int roll;
    float marks;
	float percentage;
} s;

int main() 
{
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks(overall of 500): ");
    scanf("%f", &s.marks);
	printf("%d",s.percentage);
	s.percentage= (s.marks/500)*100 ;
	printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);
	return 0;
}

