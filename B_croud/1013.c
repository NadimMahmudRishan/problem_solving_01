#include <stdio.h>
int main()
{

    int a, b, s, e;
    scanf("%d %d %d", &a, &b, &s);
    if (a > b , a > s)
    {
        e = a;
    }
    else
    {
        if (b > s)
        {
            e = b;
        }
        else
        {
            e = s;
        }
    }
    printf("%d eh o maior\n", e);

    return 0;
}