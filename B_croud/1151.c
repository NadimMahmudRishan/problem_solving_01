#include <stdio.h>
int main()
{
    int n, n1 = 0, n2 = 1, n3 = 1, temp;
    scanf("%d", &n);
    if (n < 46 && n > 0)
    {
        printf("%d %d", n1, n2);
        for (int i = 2; i < n; i++)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            printf(" %d", n3);
        }
    }
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int x, y, a = 0, b = 1, c = 0;
//     scanf("%d", &x);
//     for (y = 1; y < x; y++)
//     {
//         if (y % 2 == 1)
//         {
//             printf("%d ", c);
//             c = a + b;
//             a = c;
//         }
//         else if (y == 2)
//             printf("%d ", c);
//         else if (y % 2 == 0)
//         {
//             printf("%d ", c);
//             c = a + b;
//             b = c;
//         }
//     }
//     printf("%d\n", c);
//     return 0;
// }