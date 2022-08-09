// Name : Nadim Mahmud Rishan
// ID   : 221-35-952
#include <stdio.h>
int main()
{
    int count, n, s;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &n);
        s = 0;
        for (int j = 1; j < n; j++)
        {
            if (n % j == 0)
                s += j;
        }
        if (s == n)
            printf("%d eh perfeito\n", n);
        else
            printf("%d nao eh perfeito\n", n);
    }

    return 0;
}