//write a function to reverse an array 

#include<stdio.h>

int reverse(int arry[],int n);
void printarry (int arry[],int n);

int main(){

    int arry[]= {1,2,3,4,5};
reverse (arry,5);
printarry(arry,5);

return 0;
}


void printarry(int arry[],int n){
    for ( int i=0;i<n;i++)
    {
        
        printf("%d\n",arry[i]);
    }
}
int reverse (int arry[],int n){
for ( int i=0;i<n/2;i++){
int firstvalue =arry[i];
int secondvalue = arry[n-i-1];
arry[i]= secondvalue;
arry[n-i-1]= firstvalue;


}

}