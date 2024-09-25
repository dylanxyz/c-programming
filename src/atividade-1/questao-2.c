#include <stdio.h>

int main()
{
    int numero = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("\n");

    if (numero > 0)
        printf("Resultado: positivo\n");
    else if (numero < 0)
        printf("Resultado: negativo\n");
    else
        printf("Resultado: zero\n");

    return 0;
}