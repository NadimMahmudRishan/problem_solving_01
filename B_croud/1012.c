#include <stdio.h>
int main()
{
    double a, b, c, w, x, y, z, pi = 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    printf("TRIANGULO: %.3lf\n", (a * c)/2);
    w = (pi * (c * c));
    printf("CIRCULO: %.3lf\n", w);
    x = ((a + b) / 2) * c;
    printf("TRAPEZIO: %.3lf\n", x);
    y = b * b;
    printf("QUADRADO: %.3lf\n", y);
    z = a * b;
    printf("RETANGULO: %.3lf\n", z);
    
    return 0;
}