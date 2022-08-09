#include <stdio.h>
int main()
{
    int m, n,sum;
    for (;;)
    {
        scanf("%d %d",&m,&n);
        sum=0;
        if (m<=0||n<=0)
        {
            break;
        }
        if (n<m)
        {
            for (int i = n; i <= m; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }
        else
        {
            for (int i = m; i <= n; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }
        
        }

    return 0;
}