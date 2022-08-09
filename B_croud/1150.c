#include <stdio.h>
int main()
{
    int x, z, s = 0, i, count = 0;
    scanf("%d", &x);
    for (;;)
    {
        scanf("%d", &z);
        if (z > x && z > x + x + 1)
        {
            break;
        }
    }
    for (i = x, s = 0; s < z; i++)
    {
        s += i;
        count++;
    }
    printf("%d\n", count);
    return 0;
}