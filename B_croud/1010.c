#include <stdio.h>
int main()
{
    int a, b, x, y;
    float c, z, f;
    scanf("%d %d ",&a,&b);
    scanf("%f",&c);

    scanf("%d %d ",&x,&y);
    scanf("%f",&z);
    f = ((b * c) + (y * z));
    printf("VALOR A PAGAR: R$ %.2f\n", f);
    return 0;
}