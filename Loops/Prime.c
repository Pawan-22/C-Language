#include <stdio.h>

int main()
{
    int n, i, count = 0, l=1;
    char flag = 'N';
    printf("Enter a number \n");
    scanf("%d", &n);
    
    if(n!=1 && n!=0){   

        for(i=2; i<n; i++){
             printf("loop count %d\n", l++);
            if(n%i==0 ){
                flag = 'Y';
                break;
                
            }
        }
    }
    if(flag == 'Y'){
        printf("Its not a prime number \n");
    }
    else if(n==1 || n==0){
       printf("Its not a prime number");
    }
    else{
        printf("Its a prime number\n");
    }
  
    return 0;
}