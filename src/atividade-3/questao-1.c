#include <stdio.h>

#define length 10

int main()
{
    int vetor[length] = {0};

    for (int i = 0; i < length; i++)
    {
        printf("vec[%d] = ", i);
        scanf("%d", &vetor[i]);
        printf("\n");
    }

    printf("\n");
    printf("vetor = [");
    for (int i = 0; i < length; i++)
    {
        if (i == length - 1)
            printf("%d", vetor[i]);
        else
            printf("%d, ", vetor[i]);
    }
    printf("]\n");


    return 0;
}