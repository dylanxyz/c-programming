#include <stdio.h>

#define length 5

int main()
{
    int vetor[length] = {0};
    int soma = 0;

    for (int i = 0; i < length; i++)
    {
        printf("vec[%d] = ", i);
        scanf("%d", &vetor[i]);
        printf("\n");
    }

    for (int i = 0; i < length; i++)
        soma += vetor[i];


    printf("soma = %d\n", soma);

    return 0;
}