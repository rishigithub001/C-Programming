#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
int op;
printf("enter two nos.: \n");
scanf("%d%d",&a,&b);
printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n");
printf("Enter your choice:");
scanf("%d",&op);
switch(op)
{
case 1:
	printf("Sum is: %d",a+b);
    break;
case 2:
	printf("Diff is: %d",a-b);
	break;
case 3:
	printf("Product is: %d",a*b);
	break;
case 4:
	printf("Division is: %d",a/b);
	break;
case 5:
	printf("Modulus is: %d",a%b);
	break;
default:
	printf("Enter your choice:");
	break;
}
return 0;
}
