#include <stdio.h>
int main()
{
    char a;
    float b, c;
    scanf("%s", &a);
    scanf("%f %f", &b, &c);
    printf("TOTAL = R$ %.2f\n", (b + (c * 0.15)));

    return 0;
}