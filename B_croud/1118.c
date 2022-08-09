#include <stdio.h>
int main()
{
    float n, sum=0, count = 0;
    for (;;)
    {
        scanf("%f", &n);
        if (n == 2)
        {
            break;
        }

        if (n <= 10 && n >= 0)
        {
            sum += n;
            count++;
            if (count == 2)
            {
                printf("media = %.2f\n", sum / 2);
                printf("novo calculo (1-sim 2-nao)\n");
                sum=0;
                count=0;
                for (;;)
                {
                    scanf("%f", &n);
                    if (n == 1)
                    {
                        break;
                    }
                    else if (n==2)
                    {
                        break;
                    }
                    
                    else
                        printf("novo calculo (1-sim 2-nao)\n");
                }
                if (n==2)
                {
                    break;
                }
                
            }
        }
        else
            printf("nota invalida\n");
    }

    return 0;
}