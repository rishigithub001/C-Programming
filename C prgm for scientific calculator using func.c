#include<stdio.h>
#include<conio.h>
#include<math.h>


int main(void)
{
int choice, i, a, b;
float x, y, result;
do
{
printf("\nSelect your operation (0 to exit):\n");
printf("1. Addition\n" "2. Subtraction\n" "3. Multiplication\n" "4. Division\n");
printf("5. Square root\n" "6. X ^ Y\n" "7. X ^ 2\n" "8. X ^ 3\n");
printf("9. 1 / X\n" "10. X ^ (1 / Y)\n" "11. X ^ (1 / 3)\n");
printf("12. 10 ^ X\n" "13. X!\n" "14. per(X)\n" "15. log10(X)\n" "16. Modulus\n");
printf("17. Sin(X)\n" "18. Cos(X)\n" "19. Tan(X)\n" "20. Cosec(X)\n");
printf("21. Cot(X)\n" "22. Sec(X)\n");
printf("Give your Choice:\n" );
scanf("%d", &choice);
if(choice == 0) 
break;
switch(choice)
{
case 1:
printf("Enter X:" );
scanf("%f", &x);
printf("\nEnter Y:" );
scanf("%f", &y);
result = x + y;
printf("\nResult: %f", result);
break;
case 2:
printf("Enter X:" );
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x - y;
printf("\nResult: %f", result);
break;
case 3:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x * y;
printf("\nResult: %f", result);
break;
case 4:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = x / y;
printf("\nResult: %f", result);
break;
case 5:
printf("Enter X: ");
scanf("%f", &x);
result = sqrt(x);
printf("\nResult: %f", result);
break;
case 6:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = pow(x, y);
printf("\nResult: %f", result);
break;
case 7:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, 2);
printf("\nResult: %f", result);
break;
case 8:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, 3);
printf("\nResult: %f", result);
break;
case 9:
printf("Enter X: ");
scanf("%f", &x);
result = pow(x, -1);
printf("\nResult: %f", result);
break;
case 10:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = pow(x, (1/y));
printf("\nResult: %f", result);
break;
case 11:
printf("Enter X: ");
scanf("%f", &x);
y = 3;
result = pow(x, (1/y));
printf("\nResult: %f", result);
break;
case 12:
printf("Enter X: ");
scanf("%f", &x);
result = pow(10, x);
printf("\nResult: %f", result);
break;
case 13:
printf("Enter X: ");
scanf("%f", &x);
result = 1;
for(i = 1; i <= x; i++) 
{
result = result * i;
}
printf("\nResult: %.2f", result);
break;
case 14:
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = (x * y) / 100;
printf("\nResult: %.2f", result);
break;
case 15:
printf("Enter X: ");
scanf("%f", &x);
result = log10(x);
printf("\nResult: %.2f", result);
break;
case 16:
printf("Enter X: ");
scanf("%d", &a);
printf("\nEnter Y: ");
scanf("%d", &b);
result = a % b;
printf("\nResult: %d", result);
break;
case 17:
printf("Enter X: ");
scanf("%f", &x);
result = sin(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
case 18:
printf("Enter X: ");
scanf("%f", &x);
result = cos(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
case 19:
printf("Enter X: ");
scanf("%f", &x);
result = tan(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
case 20:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / (sin(x * 3.14159 / 180));
printf("\nResult: %.2f", result);
break;
case 21:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / tan(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
case 22:
printf("Enter X: ");
scanf("%f", &x);
result = 1 / cos(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
default:
printf("\nInvalid Choice!");
}
}
while(choice);
return 0;
}

