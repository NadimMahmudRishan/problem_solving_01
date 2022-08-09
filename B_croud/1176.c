// Name : Nadim Mahmud Rishan
// ID   : 221-35-952
#include <stdio.h>
int main()
{
    int x, count;
    long long int n[61];
    n[0] = 0;
    n[1] = 1;
    for (int i = 2; i < 61; i++)
        n[i] = n[i - 1] + n[i - 2];
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &x);
        printf("Fib(%d) = %lld\n", x, n[x]);
    }
    return 0;
}