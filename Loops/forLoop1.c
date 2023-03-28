#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);

    for(int n=a; n; n--){
        printf("The value of n is %d\n", n);
    }
return 0;
}