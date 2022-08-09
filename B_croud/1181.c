// Name : Nadim Mahmud Rishan
// ID   : 221-35-952
#include <stdio.h>
int main()
{
    float n[12][12], sum = 0;
    int s_row;
    char choise;
    scanf("%d", &s_row);
    scanf("%c", &choise);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &n[i][j]);
        }
    }
    for (int j = 0; j < 12; j++)
            {
                sum += n[s_row][j];
            }
        // switch (choise)
        // {
        // case 'S':
        //     for (int j = 0; j < 12; j++)
        //     {
        //         sum += n[j][s_row];
        //     }
        //     printf("%.1f\n", sum);
        //     break;

        // case 'M':
        //     for (int j = 0; j < 12; j++)
        //     {
        //         sum += n[j][s_row];
        //     }
        //     printf("%.1f\n", sum/12.0);
        //     break;
        // }
        if (choise == 'S')
        {
            printf("%.1f\n", sum);
        }
        else if (choise == 'M')
        {
            printf("%.1f\n", sum / 12.0);
        }
    
    
    return 0;
}