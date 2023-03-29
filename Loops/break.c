#include<stdio.h>

int main()
{
    int a=0;
    do{
        printf("The value of a is %d \n", a);
        
        if(a==3){
            break;
        } 
        a++;
        

    }while( a<10);
return 0;
}