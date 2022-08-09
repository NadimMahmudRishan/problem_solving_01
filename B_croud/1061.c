#include <stdio.h>
int main()
{
    int sh, lh, hr, sm, lm, sd, ld, ls, ss, d, s, h, m;

    scanf("Dia %d", &sd);
    scanf("%d : %d : %d\n", &sh, &sm, &ss);
    scanf("Dia %d", &ld);
    scanf("%d : %d : %d", &lh, &lm, &ls);
    
    if (ss > ls)
    {
        s = 60 - ss - ls;
        if (sm > ls)
        {
            m = 60 - sm + lm - 1;
            if (sh > lh)
            {
                h = 24 - sh + lh - 1;
                d = ld - sd - 1;
            }
            else
            {
                h = lh - sh - 1;
                d = ld - sd;
            }
        }
        else
        {
            m = lm - sm - 1;
            if (sh > lh)
            {
                h = 24 - sh + lh - 1;
                d = ld - sd - 1;
            }
            else
            {
                h = lh - sh - 1;
                d = ld - sd;
            }
        }
    }
    else
    {
        s = ls - ss;
        if (sm > ls)
        {
            m = 60 - sm + lm;
            if (sh > lh)
            {
                h = 24 - sh + lh - 1;
                d = ld - sd - 1;
            }
            else
            {
                h = lh - sh - 1;
                d = ld - sd;
            }
        }
        else
        {
            m = lm - sm;
            if (sh > lh)
            {
                h = 24 - sh + lh;
                d = ld - sd - 1;
            }
            else
            {
                h = lh - sh;
                d = ld - sd;
            }
        }
    }
    printf("%d dia(s)\n",d);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);
    return 0;
}