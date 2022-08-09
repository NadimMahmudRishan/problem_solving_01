// Name : Nadim Mahmud Rishan
// ID   : 221-35-952
#include <stdio.h>
int main()
{
    int n[20],x[20], exchange = 19;
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        x[i]=n[exchange];
        exchange --;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n",i,x[i]);
    }
    return 0;
}