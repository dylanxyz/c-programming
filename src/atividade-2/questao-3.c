/// Crie um programa que leia um número inteiro e
/// calcule o fatorial usando um laço do-while.

#include <stdio.h>

int main()
{
    int n = 0, fact = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\n");

    int i = n;
    while (i > 0)
        fact = fact * (i--);

    printf("Fatorial de %d é: %d\n", n, fact);
    return 0;
}
