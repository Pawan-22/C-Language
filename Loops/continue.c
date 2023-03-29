#include<stdio.h>

int main()
{
    int skip=7, i=0;

    while(i<10){
        i++;
        if(i!=skip){
            continue;
        }
        else{
            printf("Value of i is %d \n", i);
        }
    }
return 0;
}