// Name : Nadim Mahmud Rishan
// ID   : 221-35-952
#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= 0)
        {
            arr[i] = 1;
        }
    }
    for (int j = 0; j < 10; j++)
    {
        printf("X[%d] = %d\n", j, arr[j]);
    }
    return 0;
}