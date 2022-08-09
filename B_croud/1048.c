#include <stdio.h>
int main()
{
    float x;
    scanf("%f", &x);
    if (0 < x && x <= 400.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", x + (x * 0.15), x * 0.15);
    }
    else if (400.00 < x && x <= 800.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", x + (x * 0.12), x * 0.12);
    }
    else if (800.00 < x && x <= 1200)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", x + (x * 0.10), x * 0.10);
    }
    else if (1200 < x && x <= 2000)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", x + (x * 0.07), x * 0.07);
    }
    else if (x > 2000)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", x + (x * 0.04), x * 0.04);
    }

    return 0;
}