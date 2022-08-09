#include <stdio.h>
int main()
{
    int a, n, s = 0;
    scanf("%d", &a);
    for (;;)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            break;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        s += a++;
    }
    printf("%d\n", s);
    return 0;
}