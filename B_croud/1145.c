#include <stdio.h>
int main()
{
    int x, y, i, count = 0;
    scanf("%d %d", &x, &y);
    if ((1 < x && x < 20) && (x < y && y < 100000))
    {
        for (i = 1; i <= y; i++)
        {
            printf("%d", i);
            count++;
            if (count == x )
            {
                printf("\n");
                count = 0;
            }
            else
                printf(" ");
        }
    }
    return 0;
}