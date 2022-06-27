/* find over time pay of 10 worker*/
#include <stdio.h>
int main(){
float pay;
int  hours,i=1;

while (i<=10)
{
    printf("enter no.of hours of workred:");
    scanf("%d",&hours);



    if (hours>=20)
    {
        pay = ( hours *10);
    }
    else
    pay = 0;
    printf(" your overtime hours %d and your overtime pay is %f\n",hours,pay);

    i++;
    
}

return 0;
}