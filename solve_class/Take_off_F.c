#include <stdio.h>
int main()
{
    int T, A, B, i, X;
    scanf("%d ", &T);
    if (1 <= T <= 100)
    {

        for (i = 1; i <= T; i++)
        {
            scanf("%d %d ", &A, &B);
            if (1 <= A <= 10000 && 1 <= B <= 10000)
            {
if (A%B==0)
{
    /* code */
}



            }
        }
    }
    return 0;
}

/*

    scanf("%d %d ", &A, &B);

            if (A > B && A % B == 0)
            {

                printf("Case %d: %d\n", i, A);
            }

            else
            {
                printf("Case %d: %d\n", i, B);
            }
            scanf("%d %d", &A, &B);
*/