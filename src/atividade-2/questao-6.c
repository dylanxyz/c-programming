/// Faça um programa que leia um número inteiro positivo e
/// exiba todos os seus divisores, utilizando um laço for.

#include <stdio.h>

int main()
{
    int n = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d ", i);

    printf("\n");
    return 0;
}
