#include <stdio.h>

int main() {
    int num1, num2;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    switch(operador) {
        case '+':
            printf("Resultado: %d\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %d\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %d\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Resultado: %.2f\n", (float)num1 / num2);
            else
                printf("Erro! Divisão por zero.\n");
            break;
        default:
            printf("Operador inválido.\n");
    }

    return 0;
}
