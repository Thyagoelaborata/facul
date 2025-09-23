#include<stdio.h>

// Programa para ler dois n�meros, som�-los e no final dar um desconto
// de 10 por cento e mostrar o valor com o desconto.

int main() {
    float prod1, prod2;
    // O desconto � fixo, ent�o podemos defini-lo como uma constante.
    int desconto = 10;

    printf("Digite o valor do primeiro produto..: R$ ");
    scanf("%f", &prod1);

    printf("Digite o valor do segundo produto..: R$ ");
    // CORRE��O 1: Ler o valor para a vari�vel correta (prod2).
    scanf("%f", &prod2);

    // CORRE��O 2: Calcular a soma PRIMEIRO.
    // Isso torna o c�digo mais claro.
    float somaTotal = prod1 + prod2;

    // CORRE��O 3: Aplicar o desconto sobre a SOMA TOTAL.
    // A f�rmula � a mesma de antes, mas aplicada � vari�vel 'somaTotal'.
    // E a divis�o da porcentagem deve ser por 100.0.
    float valorFinal = somaTotal * (1.0 - (desconto / 100.0));

    // Exibe a soma antes do desconto (opcional, mas bom para clareza)
    printf("\nValor total dos produtos: R$ %.2f", somaTotal);

    // CORRE��O 4: Mensagem corrigida e usando %.2f para formatar como dinheiro.
    printf("\nValor final com 10%% de desconto: R$ %.2f\n", valorFinal);

    return 0;
}
