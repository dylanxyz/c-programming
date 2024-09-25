#include <stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    int Soma = 0;

    printf("Digite o valor para A = ");
    scanf("%d", &A);
    printf("\n");

    printf("Digite o valor para B = ");
    scanf("%d", &B);
    printf("\n");

    Soma = A + B;
    printf("A soma A + B é %d\n", Soma);

    return 0;
}