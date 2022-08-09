#include <stdio.h>
int main()
{
    int i, j, temp = 5;
    for (i = 1; i < 10; i += 2)
    {
        temp += 2;
        for (j = temp; j >(temp-3) ; j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }

    return 0;
}