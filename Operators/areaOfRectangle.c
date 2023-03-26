#include <stdio.h>

int main()
{
    int length, breadth;
    printf("Type the length of rectangle \n");
    scanf("%d", &length);

    printf("Type the breadth of rectangle \n");
    scanf("%d", &breadth);

    printf("The area of Rectangle is %d", length * breadth);

    return 0;
}