// Name : Nadim Mahmud Rishan
// ID   : 221-35-952
#include <stdio.h>
int main()
{
    int count, pa, pb, ny;
    double ga, gb;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        ny = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
        while (pa <= pb)
        {
            pa = pa + (pa * (ga / 100));
            pb = pb + (pb * (gb / 100));
            ny++;
            if (ny > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (ny <= 100)
            printf("%d anos.\n", ny);
    }

    return 0;
}