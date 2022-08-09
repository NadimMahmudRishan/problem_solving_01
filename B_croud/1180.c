// Name : Nadim Mahmud Rishan
// ID   : 221-35-952
#include <stdio.h>
int main()
{
    int n, lowest, posi;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    lowest = x[0];
    posi = 0;
    for (int i = 1; i < n; i++)
    {
        if (lowest > x[i])
        {
            lowest = x[i];
            posi = i;
        }
    }
    printf("Menor valor: %d\n", lowest);
    printf("Posicao: %d\n", posi);
    return 0;
}