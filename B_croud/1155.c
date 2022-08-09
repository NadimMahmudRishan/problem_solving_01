#include <stdio.h>
int main()
{
    float s = 0;
    for (int i = 1; i <= 100; i++)
    {
        s = s + (1 / (i * 1.00));
    }
    printf("%.2f\n", s);
    return 0;
}