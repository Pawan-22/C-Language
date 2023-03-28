#include<stdio.h>

int main()
{
    int a;
    printf("Enter number\n");
    scanf("%d", &a);

    while(a < 10){
        printf("%d\n", a);
        a++;
    }
return 0;
}