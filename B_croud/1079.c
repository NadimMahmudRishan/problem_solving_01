#include <stdio.h>
int main()
{
    int num;
    float value1, value2, value3, count;
    scanf("%d", &num);
    for (int j = 0; j < num; j++)
    {
        scanf("%f%f%f", &value1, &value2, &value3);
        count = (value1 * 2) + (value2 * 3) + (value3 * 5);
        printf("%.1f\n", count / 10);
    }
    return 0;
}