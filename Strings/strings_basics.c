#include<stdio.h>

int main()
{
    char name[] = "C Language"; // string declaration
    printf("%s\n", name);  // %s used to print whole string

    printf("%c\n", name[2]); // %c specifier used to print single character

    name[0] = 'D'; // changing first letter
    printf("%s\n", name);

   
return 0;
}