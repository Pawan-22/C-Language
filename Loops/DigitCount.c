#include <stdio.h>

int main()
{
    int n, count = 0 ;
    printf("Enter Number\n");
    scanf("%d", &n);

    // This counts number of digits in a given number.

    while (n > 0)
    {
        n /= 10;
        count += 1;
    }

    printf("Digits in given number are %d\n", count);
    return 0;
}
