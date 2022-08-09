#include <stdio.h>
int main()
{
    float i,j,add=0.00,temp;
    for (i = 0; i < 3; i++)
    {
        temp=add;
        for ( add= temp; add < temp+0.3 ; add+=0.2)
        {
            for (j = (1*1.0)+add; j < 4; j ++)
            {
                if (j == 1 || j == 2 || j == 3||i == 1 ||  == 2 || j == 3)
                {
                    printf("I=%d J=%d\n",(int) i,(int) j);
                }
                else
                printf("I=%.1f J=%.1f\n",i,j);
            }
        }
    }

    return 0;
}