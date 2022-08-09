#include<stdio.h>
int main()
{
int count,x,y;

scanf("%d",&count);
for ( int i = 0; i < count; i++)
{
    scanf("%d%d",&x,&y);
    if (y!=0)
    {
        printf("%.1f\n",(float)x/y);
    }
    else
        printf("divisao impossivel\n");
}

return 0;
}