#include <stdio.h>

int main()
{
    int idade = -1;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    if (idade < 18)
        printf("Você é menor de idade\n");
    else
        printf("Você é maior de idade\n");

    return 0;
}