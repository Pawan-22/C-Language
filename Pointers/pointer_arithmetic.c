#include<stdio.h>  
int main()
{  
    int number=20;        
    int *p;      
    p=&number; //stores the address of number variable        
    printf("Address of p variable is %u \n",p);        
            
    printf("After increment: Address of p variable is %u \n",p+1); // p will get incremented by 4 bytes.      
    printf("After increment: Address of p variable is %u \n",p+3); //  p will get incremented by 12 bytes.      
    printf("After decrement: Address of p variable is %u \n",p-1); //  p will get decremented by 4 bytes.      
return 0;  
}    