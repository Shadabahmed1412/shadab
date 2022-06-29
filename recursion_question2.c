#include<stdio.h>

/*find sum of first n natural number using recursion*/

int sum(int n);

int main(){

 printf("the sum is %d",sum(5));
 return 0;
}

int sum (int n){
 if (n==1)

 {
    return 1;
 }
    int sumNm1= sum(n-1);
    int sumN= sum(n-1)+n;
    return sumN;
}