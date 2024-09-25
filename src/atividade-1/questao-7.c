#include <stdio.h>

int main()
{
    int nota = 0;
    
    printf("Digite a sua nota: ");
    scanf("%d", &nota);

    if (nota < 3)
        printf("Você está REPROVADO\n");
    else if (nota < 6)
        printf("Você está de RECUPERAÇÃO\n");
    else
        printf("Você está APROVADO\n");

    return 0;
}