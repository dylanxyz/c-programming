#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("\n");

    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("\n");

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    printf("\n");

    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    printf("%d é o maior valor\n", max);

    return 0;
}