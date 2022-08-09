#include <stdio.h>
#include <math.h>
int main()
{
    double R, a, pi = 3.14159;
    scanf("%lf", &R);
    a = ((4.0 / 3) * pi * R * R * R);

    printf("VOLUME = %.3lf\n", a);

    return 0;
}