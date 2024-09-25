/// Crie um programa que leia um número inteiro positivo e
/// calcule a soma de seus dígitos utilizando um laço while.

#include <stdio.h>

int main()
{
    int n = 0;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("\n");

    int soma = 0;
    while (n > 0)
    {
        soma += n % 10;
        n /= 10;
    }

    printf("A soma dos digitos é: %d\n", soma);
    return 0;
}
