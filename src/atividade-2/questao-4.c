/// Escreva um programa que leia um número inteiro e imprima
/// a tabuada desse número de 1 a 10, utilizando um laço for.

#include <stdio.h>

int main()
{
    int n = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", n, i, n * i);

    return 0;
}
