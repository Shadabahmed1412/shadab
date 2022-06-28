#include<stdio.h>
int main (){
int day;
printf("enter day 1to 7:");
scanf("%d",&day);
switch (day)
{
case 1: printf("monday:");

break;
case 2: printf("tuesday:");
break;
case 3: printf("wedneday:");
break;
case 4: printf("thursdy:");
break;
case 5: printf("friday:");
break;
case 6: printf("satuarday:");
break;
case 7: printf("sunday:");
break;
}

return 0;
}


