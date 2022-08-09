#include <stdio.h>
int main()
{
    int count, x, y;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        int sum = 0;
        scanf("%d %d", &x, &y);
        if (y>x)
        {
        
        for (int j = x + 1; j < y; j++)
        {

            if (j % 2 != 0)
            {
                sum += j;
            }
        }
        printf("%d\n",sum);
        }
        else
        {
            for (int j = y + 1; j < x; j++)
            {

                if (j % 2 != 0)
                {
                    sum += j;
                }
            }
            printf("%d\n", sum);
        }
        
    }

    return 0;
}