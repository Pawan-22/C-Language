#include <stdio.h>
void display(); // function prototype
int main()
{
    int a;
    display(); //function call

    return 0;
}

//function definition
void display()
{
    printf("Hello World\n");
}