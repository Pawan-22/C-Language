#include <stdio.h>
int main()
{
    int a;   // variable declaration of type int
    float b; // variable declaration of type float

    printf("Enter Integer \n");
    scanf("%d", &a); // Takes the input from user and stores in variable a, %d=>takes an integer input

    printf("Enter Float \n");
    scanf("%f", &b);

    printf("Entered Intger is %d \n", a);
    printf("Entered Float is %f \n", b);

    return 0;
}
