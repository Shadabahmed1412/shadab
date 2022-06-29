#include <stdio.h>

/* print n thimes  hello world using recursion*/
void printhelloworld( int n);
int main(){
printhelloworld(10);

}

void printhelloworld(int n)
{
    if (n==0)

    {
        return;
    }
printf("hello world:\n");

printhelloworld(n-1);
}