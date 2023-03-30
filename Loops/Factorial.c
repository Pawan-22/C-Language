// Program to calculate a factorial of a given number.

#include<stdio.h>

int main()
{
   int i = 0, n, factorial=1;
   printf("Enter a number\n");
   scanf("%d", &n);
   for(i = 1; i <=n; i++){
    factorial*=i;
    
   }
   printf("Factorial of %d is %d\n",n, factorial);

return 0;
}