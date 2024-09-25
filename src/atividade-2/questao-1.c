/// Escreva um programa que leia um número inteiro positivo n e calcule
/// a soma de todos os números de 1 até n usando um laço for.

#include <stdio.h>

int main()
{
    int n = 0;
    int soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= n; i++)
        soma += i;

    printf("Soma de 1 até %d é: %d\n", n, soma);

    return 0;
}
