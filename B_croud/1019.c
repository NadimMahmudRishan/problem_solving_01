#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    b = a % 3600;
    c = b % 60;
    printf("%d:%d:%d\n", a / 3600, b / 60, c);

    return 0;
}