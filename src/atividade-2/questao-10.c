/// Utilizando a série de Leibniz, escreva um programa que calcule
/// uma aproximação para o valor de Pi. O programa deve perguntar
/// ao usuário quantos termos da série ele deseja utilizar e, em
/// seguida, realizar o cálculo usando um laço for.

#include <stdio.h>

int main()
{
    int n = 0;
    float pi = 0;
    float soma = 0;

    printf("Digite o número de termos: ");
    scanf("%d", &n);
    printf("\n");

    for (int k = 0; k < n; k++)
        soma += (k % 2 == 0 ? 1.0f : -1.0f) / (2*k + 1);

    pi = 4 * soma;
    printf("Aproximação de pi com %d termos: %.8f\n", n, pi);

    return 0;
}
