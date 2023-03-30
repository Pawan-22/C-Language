#include<stdio.h>
int main()
{
   int i=8,j,sum=0;
   for(j=1;j<=10;j++)
   {
       
       sum=sum+(i*j);
       
   }
   printf("sum is %d\n",sum);
   return 0;
}