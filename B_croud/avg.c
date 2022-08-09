#include<stdlib.h>
int main()
{
int a,b,c,d;
float e;
printf("Inter the 1st number:");
scanf("%d",&a);
printf("Inter the 2nd number:");
scanf("%d",&b);
printf("Inter the 3rd number:");
scanf("%d",&c);
d=a+b+c;
e=(float)d/3;
printf("The total of three number is:%d",d);
printf("\nThe average of three number is:%.3f",e);
return 0;

}

