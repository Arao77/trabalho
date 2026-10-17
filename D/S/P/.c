#include <stdio.h>
int main() {
    double num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    printf("\n--- Resultados ---\n");
    printf("Soma: %.2f\n", num1 + num2);
    printf("Diferenca: %.2f\n", num1 - num2);
    printf("Produto: %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("Divisao: %.2f\n", num1 / num2);
    } else {
        printf("Divisao por zero nao permitida.\n");
    }

    return 0;
}
