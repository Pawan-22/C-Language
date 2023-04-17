#include<stdio.h>
int fib(int x);

int main()
{
    int j;
    
    for(j=0; j <= 10;j++){
        printf(" %d ", fib(j));
    }
    
return 0;
}

int fib(int x){
    if(x==1 || x==2){
        return 1;
    }
    else if(x == 0){
        return 0;
    }
    else{
        return fib(x-1) + fib(x-2);
    }
}