#include <stdio.h>

int main()
{
    int n = 0;
    
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", i, n, i * n);

    return 0;
}