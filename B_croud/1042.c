#include <stdio.h>
int main()
{
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);
    if (x < y && x < z)
    {
        printf("%d\n", x);
        if (z < y)
        {
            printf("%d\n", z);
            printf("%d\n", y);
        }
        else
        {
            printf("%d\n", y);
            printf("%d\n", z);
        }
    }
    else if (y < x && y < z)
    {
        printf("%d\n", y);
        if (x < z)
        {
            printf("%d\n", x);
            printf("%d\n", z);
        }
        else
        {
            printf("%d\n", z);
            printf("%d\n", x);
        }
    }
    else
    {
        printf("%d\n", z);
        if (x < y)
        {
            printf("%d\n", x);
            printf("%d\n", y);
        }
        else
        {
            printf("%d\n", y);
            printf("%d\n", x);
        }
    }
    printf("\n%d\n%d\n%d\n", x, y, z);
    return 0;
}