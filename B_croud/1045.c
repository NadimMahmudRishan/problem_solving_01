#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    /*if (x>y&&x>z)
    {
        if (y>z)
        {
          a=x;
          b=y;
          c=z;
        }
        else
        {
            a = x;
            b = z;
            c = y;
        }
    }
    else if (y>x&&y>z)
    {
        if (x > z)
        {
            a = y;
            b = x;
            c = z;
        }
        else
        {
            a = y;
            b = z;
            c = x;
        }
    }
    else
    {
        if (x > y)
        {
            a = z;
            b = x;
            c = y;
        }
        else
        {
            a = z;
            b = y;
            c = x;
        }
    }*/

    if (a >= (c + b) || b > (a + c) || c > (a + b))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (a * a == (b * b + c * c) || b * b == (a * a + c * c) || c * c == (b * b + a * a))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if ((a * a) > (b * b + c * c) || (b * b) > (a * a + c * c) || (c * c) > (b * b + a * a))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if ((a * a) < (b * b + c * c) || (b * b) < (a * a + c * c) || (c * c) < (b * b + a * a))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if (a == b && a != c || b == c && b != a || a == c && a != b)
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}