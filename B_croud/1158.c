#include <stdio.h>
int main()
{
    int n, x, y, s;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        s = 0;
        scanf("%d %d", &x, &y);
        for (int j = x, count = 0; count < y; j++)
        {
            if (j % 2 != 0)
            {
                s += j;
                count++;
            }
        }
        printf("%d\n", s);
    }

    return 0;
}