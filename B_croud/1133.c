#include <stdio.h>
int main()
{
    int n1, n2, s1, s2,i;
    scanf("%d%d", &n1, &n2);
    if (n1 > 0 && n2 > 0)
    {
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
        for (i = s1+1; i < s2; i++)
        {
            if ((i % 5 == 2) || (i % 5 == 3))
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}