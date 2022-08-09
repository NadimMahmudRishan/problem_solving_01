#include <stdio.h>
int main()
{
    float num, count = 0, sum=0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &num);
        if (num > 0)
        {
            sum += num;
            count++;
        }
    }
    printf("%.0f valores positivos\n%.1f\n",count,sum/count);
    return 0;
}