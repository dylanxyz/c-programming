/// Escreva um programa que leia um número inteiro e faça a
/// contagem regressiva até 1, utilizando um laço for.

#include <stdio.h>

int main()
{
    int n = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\n");

    for (int i = n; i > 0; i--)
        printf("%d ", i);

    printf("\n");
    return 0;
}
