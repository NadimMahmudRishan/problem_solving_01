#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (0 <= a <= 5000)
    {

        if (a % 2 == 0 && a != 0)
        {
            printf("The Universe of Spider-Man 1\n");
        }

        else if (a == 0)
        {
            printf("The Universe of our Hero\n");
        }

        else
        {
            printf("The Universe of Spider-Man 2\n");
        }
    }

    return 0;
}
