#include<stdio.h>
void swap(int *a, int *b);

int main()
{
    int x = 3, y = 4;
    swap(&x, &y);
    printf("value after swapping is %d and %d \n",x, y);
return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}