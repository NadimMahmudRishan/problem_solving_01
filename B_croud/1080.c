#include<stdio.h>
int main()
{
int num[100],i,count;
for ( i = 0; i < 10; i++)
{
    scanf("%d",&num[i]);
}
int max=num[0];
for ( i = 0; i < 100; i++)
{
    if (max<num[i])
    {
        max=num[i];
        count=i+1;
    }
    
}
printf("%d\n%d\n",max,count);

return 0;
}