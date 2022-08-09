#include <stdio.h>
int main()
{
    double n;
    int inputint, a, b;
    scanf("%lf", &n);
    printf("NOTAS:\n");
    inputint = n;
    printf("%d nota(s) de R$ 100.00\n", inputint / 100);
    a = inputint % 100;

    printf("%d nota(s) de R$ 50.00\n", a / 50);
    a = a % 50;

    printf("%d nota(s) de R$ 20.00\n", a / 20);
    a = a % 20;

    printf("%d nota(s) de R$ 10.00\n", a / 10);
    a = a % 10;

    printf("%d nota(s) de R$ 5.00\n", a / 5);
    a = a % 5;

    printf("%d nota(s) de R$ 2.00\n", a / 2);
    a = a % 2;

    printf("MOEDAS:\n");

    b = (n * 100) - (inputint*100);
    printf("%d moeda(s) de R$ 1.00\n", a);

    printf("%d moeda(s) de R$ 0.50\n", b / 50);
    b = b % 50;

    printf("%d moeda(s) de R$ 0.25\n", b / 25);
    b = b % 25;

    printf("%d moeda(s) de R$ 0.10\n", b / 10);
    b = b % 10;
    printf("%d moeda(s) de R$ 0.05\n", b / 5);
    b = b % 5;
    printf("%d moeda(s) de R$ 0.01\n", b/1);

    return 0;
}
