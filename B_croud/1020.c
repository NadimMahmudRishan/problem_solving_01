#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    b = a % 365;
    c = b % 30;
    printf("%d ano(s)\n", a / 365);
    printf("%d mes(es)\n", b / 30);
    printf("%d dia(s)\n", c);
    return 0;
}
