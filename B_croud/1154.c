#include <stdio.h>
int main()
{
    int n, count = 0;
    float sum = 0;
    for (;;)
    {
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        count++;
        sum += n;
    }
    printf("%.2f\n", sum / count);
    return 0;
}