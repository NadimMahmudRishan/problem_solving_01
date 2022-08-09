// Name : Nadim Mahmud Rishan
// ID   : 221-35-952
#include <stdio.h>
int main()
{
    int n[15], a[5], b[5], x = 0, y = 0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        if (n[i] % 2 == 0)
        {
            a[x] = n[i];
            x++;
            if (x >= 5)
            {
                for (int j = 0; j < x; j++)
                {
                    printf("par[%d] = %d\n", j, a[j]);
                }
                x = 0;
            }
        }
        else
        {
            b[y] = n[i];
            y++;
            if (y >= 5)
            {
                for (int j = 0; j < y; j++)
                {
                    printf("impar[%d] = %d\n", j, b[j]);
                }
                y = 0;
            }
        }
        if (i==14)
        {
            for (int j = 0; j < y; j++)
            {
                printf("impar[%d] = %d\n", j, b[j]);
            }
            for (int j = 0; j < x; j++)
            {
                printf("par[%d] = %d\n", j, a[j]);
            }
        }
        
    }

    return 0;
}