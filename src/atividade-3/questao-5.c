#include <stdio.h>

#define length 5

int main()
{
    int vetor_a[length] = {0};
    int vetor_b[length] = {0};
    int vetor_c[length] = {0};

    for (int i = 0; i < length; i++)
    {
        printf("vetor_a[%d] = ", i);
        scanf("%d", &vetor_a[i]);
        printf("\n");
    }

    for (int i = 0; i < length; i++)
    {
        printf("vetor_b[%d] = ", i);
        scanf("%d", &vetor_b[i]);
        printf("\n");
    }

    for (int i = 0; i < length; i++)
        vetor_c[i] = vetor_a[i] + vetor_b[i];

    printf("\n");
    printf("vetor soma = [");
    for (int i = 0; i < length; i++)
    {
        if (i == length - 1)
            printf("%d", vetor_c[i]);
        else
            printf("%d, ", vetor_c[i]);
    }
    printf("]\n");

    return 0;
}