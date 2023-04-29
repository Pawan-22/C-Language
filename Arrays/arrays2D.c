#include<stdio.h>

int main()
{
    int num[3][2] = {{97, 99},{8, 20 },{25, 21}}; // 2d array. 

    printf("%d\n", num[1][1]);  // accesing elements

    num[2][1] = 22; // changing array element

    printf("%d\n" ,num[2][1]);
return 0;
}