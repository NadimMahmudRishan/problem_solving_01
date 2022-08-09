#include <stdio.h>
int main()
{
    int count, num, c = 0, r = 0, s = 0, i, t;
    char carr;
    double pc, pr, ps;
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        scanf("%d %c", &num, &carr);
        switch (carr)
        {
        case 'C':
            c += num;
            break;
        case 'R':
            r += num;
            break;
        case 'S':
            s += num;
            break;
        }
    }
    t = s + r + c;
    pc = (c / (t*1.00)) * 100;
    pr = (r / (t*1.00)) * 100;
    ps = (s / (t*1.00)) * 100;
    printf("Total: %d cobaias\n", t);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2lf %%\n", pc);
    printf("Percentual de ratos: %.2lf %%\n", pr);
    printf("Percentual de sapos: %.2lf %%\n", ps);

    return 0;
}