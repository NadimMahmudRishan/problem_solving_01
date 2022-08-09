#include <stdio.h>
int main()
{
    float salary;
    scanf("%f", &salary);
    if (0.00 < salary && salary <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (2000.01 <= salary && salary <= 3000.00)
    {
        printf("R$ %.2f\n", ((salary - 2000) * 0.08));
    }
    else if (3000.01 <= salary && salary <= 4500.00)
    {
        printf("R$ %.2f\n", (1000* 0.08)+((salary-3000)*0.18));
    }
    else if (4500.00 <= salary)
    {
        printf("R$ %.2f\n",(1000 * 0.08)+(1500*.18)+((salary-4500)*0.28));
    }

    return 0;
}