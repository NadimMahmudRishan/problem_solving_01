// Name : Nadim Mahmud Rishan
// ID   : 221-35-952
#include <stdio.h>
int main()
{
    int t, n[1000], x = 0;
    scanf("%d", &t);
    for (int i = 0; i < 1000; i++)
    {
        n[i] = x;
        x++;
        if (x == t)
            x = 0;
    }

    for (int i = 0; i < 1000; i++)
        printf("N[%d] = %d\n", i, n[i]);

    return 0;
}