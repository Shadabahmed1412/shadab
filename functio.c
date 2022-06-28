/* functiom to calculate the squar of  a number*/

#include <stdio.h>

int calsquar(int n);

int mian(){
    int n;
    printf("enter any number :");
    scanf("%d",&n);
    printf("squar is %d", calsquar(n));
    return 0;

    
    }

int calsquar(int n) {
    return n*n;
}