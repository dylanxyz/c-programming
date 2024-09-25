/// Escreva um programa que leia dois números inteiros: base e expoente.
/// O programa deve calcular a potência (base^expoente) utilizando um
/// laço de repetição while.

#include <stdio.h>

int main()
{
    int b = 0;
    int n = 0;
    int p = 1;

    printf("Digite a base: ");
    scanf("%d", &b);
    printf("\n");

    printf("Digite o expoente: ");
    scanf("%d", &n);
    printf("\n");

    int i = 0;
    while (i++ < n)
        p *= b;

    printf("%d ^ %d = %d\n", b, n, p);
    return 0;
}
