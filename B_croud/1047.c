#include <stdio.h>
int main()
{
    int h1, h2, m1, m2, m;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
    if (h1 == h2 && m1 == m2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if (h2 < h1)
    {
        if (m2 < m1)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (24 - h1) + h2-1, (60 - m1) + m2);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (24 - h1) + h2 , m2-m1);
        }
    }
    else
    {
        if (m2 < m1)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2 - h1-1, (60 - m1) + m2);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h2 - h1 , m2-m1);
        }
    }

    return 0;
}