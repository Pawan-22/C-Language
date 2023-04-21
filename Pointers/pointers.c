#include <stdio.h>

int main()
{
    int i = 8;
    int *j; // pointer declaration
    j = &i;
    printf("Value of i %d \n", i);     // prints value of i
    printf("Value of i %d \n", *j);    // prints value of i which is in j
    printf("Add of i %u \n", &i);      // prints address of i
    printf("Add of i %u \n", j);       // prints address of i which is in j
    printf("Add of j %u \n", &j);      // prints address of j
    printf("value of j %u \n", *(&j)); // prints value of j which is in j

    return 0;
}