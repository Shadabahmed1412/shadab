#include <stdio.h>

int main(){

    int num, i,factorial;
    printf("eter anynumber:");
    scanf("%d",&num);

    factorial= i=1;
    while (i<=num)
    {
        factorial= factorial*i;
        i++;
    }
    
    printf("factorial value of %d is %d",num ,factorial);
    return 0;

}