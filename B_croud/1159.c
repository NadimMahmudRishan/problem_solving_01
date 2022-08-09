#include <stdio.h>
int main()
{
    int x, s = 0, count;
    for (;;)
    {
        scanf(" %d", &x);
        if (x == 0)
            break;
        count = 0;
        while (count != 5)
        {
            if (x % 2 == 0)
            {
                s += x;
                count++;
            }
            x++;
        }
        printf("%d\n", s);
        s = 0;
    }
    return 0;
}