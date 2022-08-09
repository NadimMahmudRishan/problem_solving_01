#include <stdio.h>
int main()
{
    double N1, N2, N3, N4, N5, X;
    scanf("%lf%lf%lf%lf", &N1, &N2, &N3, &N4);

    X = (((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10.0);
    printf("Media: %0.1lf\n", X);
    if (X >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if (X < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if (X >= 5.0 && X < 7.0)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &N5);
        printf("Nota do exame: %0.1lf\n", N5);
        X = (X + N5) / 2.0;
        if (X >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        if (X < 5.0)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1lf\n", X);
    }
    return 0;
}