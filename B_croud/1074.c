#include <stdio.h>
int main()
{
    int num, i, value;
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &value);
        if (value==0)
        {
            printf("NULL\n");
        }

        else if (value % 2 == 0 && value < 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (value % 2 == 0 && value > 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (value % 2 != 0 && value < 0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if (value % 2 != 0 && value > 0)
        {
            printf("ODD POSITIVE\n");
        }
    }

    return 0;
}