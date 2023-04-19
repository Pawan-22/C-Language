// // 0 1 1 2 3 5 8 13......
// #include<stdio.h>

// int main()
// {
//     int num, a = 0, b =1, c;
//     printf("Enter Limit of the Series\n");
//     scanf("%d",&num);

//     for(int i = 0; i<=num; i++){
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;

//     }
// return 0;
// }

#include<stdio.h>

int main()
{
    int i=0, a=0,b=1,c, n =10;
    while(i<=n){
        printf("%d ",a );
        c = a + b;
        a = b;
        b = c;
        i++;
    }
return 0;
}

