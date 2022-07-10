#include <stdio.h>


/* to find the factoril of number*/

int fact ( int n);

int main(){

printf("factorial is %d", fact(5));
return 0;
}

int fact( int n){ 

if (n==1){
return 1;
}


    int factm1= fact(n-1);
    int factN= factm1 * n;
    return factN;
}