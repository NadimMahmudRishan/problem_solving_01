#include <stdio.h>
int main()
{
    int n, ans = 1;
    scanf("%d", &n);

    if (n > 0 && n < 13)
    {
        for (int i = n; i >= 1; i--)
        {
            ans = ans * i;
        }
        printf("%d\n", ans);
    }
    return 0;
}