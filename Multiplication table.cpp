#include <stdio.h>
int main() 
{
  int a, b;
  printf("Enter an integer: ");
  scanf("%d", &a);
  for (b = 1; b <= 30; b++) 
  {
    printf("%d * %d = %d \n", a, b, a * b);
  }
  return 0;
}