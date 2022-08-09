#include <stdio.h>
int main()
{
    int A, B, C, D, E;

    scanf("%d %d %d %d", &A, &B, &C, &D);
    E = (A + B + C + D);
    if (A==1)
    {
        printf("YES\n");
    }
    
   else if (E > 2 || E == 2)
    {
        printf("YES\n");
    }
    else
    {

        printf("NO\n");
    }

    return 0;
}