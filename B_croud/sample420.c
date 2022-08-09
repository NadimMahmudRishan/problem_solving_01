// Name : Nadim Mahmud Rishan
// ID   : 221-35-952
#include <stdio.h>
int main()
{
    double n[12][12], sum = 0.0;
    int s_row;
    char choise[2];
    scanf("%d", &s_row);
    scanf("%s", &choise[0]);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &n[i][j]);
        }
    }
    for (int j = 0; j < 12; j++)
    {
        sum += n[s_row][j];
    }
    if (choise[0] == 'S')
        printf("%.1lf\n", sum);
    else if (choise[0] == 'M')
        printf("%.1lf\n", sum / 12.0);
    return 0;
}