#include <stdio.h>

int main(void) {
    int a, b;

    // Solicita e lê o primeiro número
    printf("Digite o primeiro número: ");
    if (scanf("%d", &a) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    // Solicita e lê o segundo número
    printf("Digite o segundo número: ");
    if (scanf("%d", &b) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }

    // Calcula e exibe a soma
    int soma = a + b;
    printf("Resultado da soma: %d\n", soma);

    return 0;
}
