#include<stdio.h>

int main()
{
    int a;
    printf("Enter Marks\n");
    scanf("%d", &a);

    int b;
    printf("Enter Marks\n");
    scanf("%d", &b);

    int c;
    printf("Enter Marks\n");
    scanf("%d", &c);


    
     if (a >33 && b >33 && c>33 && a + b + c >= 40){
        printf("Pass\n");
    }
    else{
        printf("Fail");
    }
return 0;
}