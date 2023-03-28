#include<stdio.h>

int main()
{
    int i = 0, n;
    printf("Enter a number\n");
    scanf("%d", &n);

    
    do{
        printf("The value of is %d\n", i+1);
        i++;
    } while( i < n);
return 0;
}