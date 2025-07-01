#include <stdio.h>
#include <math.h>

void soma(float n1, float n2) {
    float resultado = n1 + n2;
    printf("O resultado da adicao = %.2f\n", resultado);
}

void subtrai(float n1, float n2) {
    float resultado = n1 - n2;
    printf("O resultado da subtracao = %.2f\n", resultado);
}

void multiplica(float n1, float n2) {
    float resultado = n1 * n2;
    printf("O resultado da multiplicacao = %.2f\n", resultado);
}

void divisao(float n1, float n2) {
    if (n2 == 0) {
        printf("Erro, Nenhum numero pode ser dividido por zero.\n");
    } else {
        float resultado = n1 / n2;
        printf("O resultado da divisao = %.2f\n", resultado);
    }
}

void potenciacao(float n1, float n2) {
    float resultado = pow(n1, n2);
    printf("O resultado da potenciacao = %.2f\n", resultado);
}

int main() {
    int operacao;
    float n1, n2;
    char continuar;

    do {
        printf("\nEscolha uma operacao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Potenciacao\n");
        printf("\nDigite o numero da operacao desejada (1-5): ");
        scanf("%d", &operacao);

        switch (operacao) {
            case 1:
                printf("Voce escolheu a opcao 1: Adicao\n");
                break;
            case 2:
                printf("Voce escolheu a opcao 2: Subtracao\n");
                break;
            case 3:
                printf("Voce escolheu a opcao 3: Multiplicacao\n");
                break;
            case 4:
                printf("Voce escolheu a opcao 4: Divisao\n");
                break;
            case 5:
                printf("Voce escolheu a opcao 5: Potenciacao\n");
                break;
            default:
                printf("Opcao invalida!\n");
                continue; 
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        switch (operacao) {
            case 1:
                soma(n1, n2);
                break;
            case 2:
                subtrai(n1, n2);
                break;
            case 3:
                multiplica(n1, n2);
                break;
            case 4:
                divisao(n1, n2);
                break;
            case 5:
                potenciacao(n1, n2);
                break;
        }

        printf("\nDeseja calcular algo mais? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Saindo...\n");
    return 0;
}
