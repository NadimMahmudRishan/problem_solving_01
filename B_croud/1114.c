#include<stdio.h>
int main()
{
int pass;
for ( ;;)
{
    scanf("%d",&pass);
    if (pass==2002)
    {
        printf("Acesso Permitido\n");
        break;
    }
    else
    printf("Senha Invalida\n");
}

return 0;
}