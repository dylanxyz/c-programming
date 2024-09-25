#include <stdio.h>

int main()
{
    int ano = 0;
    int idade = 0;

    printf("Digite o ano em que nasceu: ");
    scanf("%d", &ano);
    printf("\n");

    idade = 2024 - ano;
    printf("A sua idade é %d e você é ", idade);

    if (idade < 18)
        printf("MENOR de idade\n");
    else
        printf("MAIOR de idade\n");

    return 0; 
}