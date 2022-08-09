#include <stdio.h>
int main()
{
    int p, i, n;
    float p1[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    scanf("%d%d",& p, &n);
    for (i = 0; i < 5; i++)

    {
        if (p == i+1)
        {
            printf("Total: R$ %.2f\n", p1[i] * n);
            break;
        }
    }

    return 0;
}