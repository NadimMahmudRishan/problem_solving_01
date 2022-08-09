#include <stdio.h>
int main()
{
    float n, sum = 0;
    int count = 0;
    for (;;)
    {
        scanf("%f", &n);
        if (n >= 0 && n <= 10)
        {
            sum += n;
            count++;
            if (count >= 2)
            {
                printf("media = %.2f\n", sum / 2);
                break;
            }
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    return 0;
}