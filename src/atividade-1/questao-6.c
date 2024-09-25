#include <stdio.h>

int main()
{
    int soma = 0;

    for (int i = 1; i <= 5; i++)
    {
        int valor = 0;
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);
        printf("\n");
        soma += valor;
    }

    float media = soma / 5.0f;
    printf("A media dos valores é %.2f\n", media);

    return 0;
}