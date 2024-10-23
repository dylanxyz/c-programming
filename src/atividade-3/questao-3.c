#include <stdio.h>

#define length 8

int main()
{
    int vetor[length] = {0};
    int menor = __INT32_MAX__, maior = -__INT32_MAX__;

    for (int i = 0; i < length; i++)
    {
        printf("vec[%d] = ", i);
        scanf("%d", &vetor[i]);
        printf("\n");
    }

    for (int i = 0; i < length; i++)
    {
        int val = vetor[i];

        if (val < menor)
            menor = val;
        else if (val > maior)
            maior = val;
    }

    printf("maior = %d\n", maior);
    printf("menor = %d\n", menor);

    return 0;
}