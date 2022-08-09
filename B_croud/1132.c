#include <stdio.h>
int main()
{
    int n1, n2, sum = 0, s1, s2;
    scanf("%d%d", &n1, &n2);
    if (n1 < n2)
    {
        s1 = n1;
        s2 = n2;
    }
    else
    {
        s1 = n2;
        s2 = n1;
    }
    for (int i = s1; i <= s2; i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}