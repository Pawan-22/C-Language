#include<stdio.h>

int main()
{
    int marks[2];
    printf("Enter marks for 1st \n");
    scanf("%d", &marks[0]);
     printf("Enter marks for 2st \n");
    scanf("%d", &marks[1]);

    printf("Entered values are %d and %d\n", marks[0], marks[1]);
return 0;
}