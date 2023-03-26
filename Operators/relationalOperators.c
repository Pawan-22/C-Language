#include<stdio.h>

int main()
{
    int a = 6,  b = 3, c = 6, d = 8;
    printf("a is equal to c %d\n", a == 6); //It will return the value 1 b/c its true otherwise it will return 0.
    printf("a is not equal to c %d\n", a!=c); //NOT operator
    printf("a is greater than b %d\n", a>b);
    printf("a is greater than or equal to b %d\n", a>=b);
    printf("a is less than d %d\n", a<d);
    printf("a is less than or equal to d %d\n", a<=d);
    
    return 0;
}