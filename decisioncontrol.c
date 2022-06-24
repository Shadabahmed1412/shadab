/* to calculate profit or losss*/
# include<stdio.h>
int main(){

float costprice , sellingprice, p, l;
costprice = 25;
sellingprice =15;

 
p = sellingprice  - costprice;
l = costprice - sellingprice;

if (p>0)

printf("this seller made a profit pf rs: %f\n",p);

if (l>0)
printf("ths seller loss of rs:%f\n",l);

if(p==0)
printf("there is no loss and profit \n");

return 0;













}