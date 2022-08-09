// Name : Nadim Mahmud Rishan
// ID   : 221-35-952
#include <stdio.h>
int main()
{
    int count, n, ind;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &n);
        ind = 0;
        for (int j = 2; j * j <= n; j++)
        {
            if (n % j == 0)
            {
                ind = 1;
                break;
            }
        }
        if (ind == 1)
            printf("%d nao eh primo\n", n);
        else
            printf("%d eh primo\n", n);
    }

    return 0;
}