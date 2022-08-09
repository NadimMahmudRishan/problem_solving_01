#include <stdio.h>
int main()
{
    float s = 0;
    int i, j = 1;
    for (i = 1; i <= 39; i+=2)
    {
        s = s + (i / (j * 1.00));
        j=j*2;
    }
    printf("%.2f\n", s);
    return 0;
}