/// Faça um programa que leia um número inteiro positivo e
/// imprima todos os números ímpares entre 1 e o número
/// digitado, utilizando um laço while.

#include <stdio.h>

int main()
{
    int n = 0, i = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\n");

    while (i++ < n)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
