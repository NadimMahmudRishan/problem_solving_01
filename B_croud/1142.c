#include <stdio.h>
int main()
{
    int i, n, k = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (int j = k; j <= n * 4; j++)
        {
            if (j % 4 != 0)
            {
                printf("%d ", j);
            }
            else
            {
                printf("PUM\n");
                k = j + 1;
                break;
            }
        }
    }

    return 0;
}