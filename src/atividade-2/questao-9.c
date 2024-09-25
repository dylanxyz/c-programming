/// Escreva um programa que leia um número inteiro
/// positivo e informe quantos dígitos esse número
/// possui, utilizando um laço while.

#include <stdio.h>

int main()
{
    int n = 0;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("\n");

    int x = n, i = 0;
    while (x > 0)
    {
        i += 1;
        x /= 10;
    }

    printf("O número %d tem %d digitos.\n", n, i);
    return 0;
}
