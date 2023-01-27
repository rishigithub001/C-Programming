#include <stdio.h>
int main()
{
   int i,n,sum=0,diff=0;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   printf("\nThe square natural upto %d terms are :",n);
   for(i=1;i<=n;i++)
   {
     printf("%d  ",i*i*i);
     sum+=i*i*i;
   }
   printf("\nThe Sum of cube Natural Number upto %d terms = %d \n",n,sum);
   printf("\nThe Diff of cube Natural Number upto %d terms = %d \n",n,diff);
}
