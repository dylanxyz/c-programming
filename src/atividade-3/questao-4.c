#include <stdio.h>

#define length 6

int main()
{
    int vetor[length] = {0};

    for (int i = 0; i < length; i++)
    {
        printf("vec[%d] = ", i);
        scanf("%d", &vetor[i]);
        printf("\n");
    }

    for (int i = 0; i < length; i+=2)
        printf("vetor[%d] = %d\n", i, vetor[i]);

    return 0;
}