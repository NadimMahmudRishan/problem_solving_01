#include <stdio.h>
int main()
{
    int count, i;
    scanf("%d", &count);
    for (i = 1; i <= count; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
        printf("%d %d %d\n", i, i * i + 1, i * i * i + 1);
    }

    return 0;
}