#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, e, f;
    scanf("%lf%lf%lf", &a, &b, &c);
    f = sqrt((b * b) - (4 * a * c));

    d = -b + f;
    e = -b - f;

    if (((b * b) - (4 * a * c)) > 0 && a!=0)

    {
        printf("R1 = %.5lf\n", d / (2 * a));

        printf("R2 = %.5lf\n", e / (2 * a));
    }
        

    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}