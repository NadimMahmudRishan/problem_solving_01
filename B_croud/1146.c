#include <stdio.h>
int main()
{
    int x, i;
    for (;;)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            break;
        }

        for (i = 1; i <= x; i++)
        {
            printf("%d", i);
            if (i == x)
            {
                printf("\n");
                break;
            }
            else
                printf(" ");
        }
    }
    return 0;
}