#include <stdio.h>

int main()
{
    char a[15], b[15], c[15];
    scanf("%s%s%s",& a,& b,& c);
    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'c')
       printf("aguia\n");
    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'o')
       printf("pomba\n");
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'o') 
      printf("homem\n");
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'h') 
      printf("vaca\n");
    if (a[0] == 'i' && b[0] == 'i' && c[0] == 'm') 
      printf("pulga\n");
    if (a[0] == 'i' && b[0] == 'i' && c[0] == 'r')
       printf("lagarta\n");
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'h')
       printf("sanguessuga\n");
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'o') 
      printf("minhoca\n");

    return 0;
}