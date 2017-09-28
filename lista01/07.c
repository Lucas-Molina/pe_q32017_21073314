#include <stdio.h>

int main()
{
    int base, expoente;
    long long potencia = 1;
    int i;

    printf("Insira a base: ");
    scanf("%d", &base);
    printf("Insira o expoente: ");
    scanf("%d", &expoente);

    for(i=1; i<=expoente; i++)
    {
        potencia = potencia * base;
    }

    printf("%d ^ %d = %lld", base, expoente, potencia);

    return 0;
}
