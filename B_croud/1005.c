#include <stdio.h>

int main()
{

    float A, B, c;
    scanf("%f %f", &A, &B);
    c = ((A * 3.5 + B * 7.5) / (3.5 + 7.5));
    printf("MEDIA = %.5f\n", c);
    return 0;
}