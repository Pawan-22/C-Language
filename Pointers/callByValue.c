#include<stdio.h>
int sum(int x, int y);
int main()
{
    int a = 4, b =7;
    printf("The value of 4 + 7 is %d \n", sum(a,b));
return 0;
}

int sum(int x, int y){
    return x + y;
}