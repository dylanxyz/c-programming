#include <stdio.h>

int main()
{
    int valor = 0;

    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("\n");

    if (valor % 2 == 0)
        printf("%d é PAR\n", valor);
    else
        printf("%d é ÍMPAR\n", valor);

    return 0;
}