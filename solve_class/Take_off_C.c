#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (1 <= a <= 20 && 1 <= b <= 10000 && 0 <= c <= 10000)
    {

printf("%d",(a*b)+c);

    }

    return 0;
}