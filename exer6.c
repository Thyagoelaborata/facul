#include<stdio.h>

// Programa para ler um valor e uma porcentagem de desconto e devolver
// o valor final com o desconto aplicado

int main() {
    // CORRE��O: Usar 'float' para valores que podem ter casas decimais
    float valorProd, desconto;

    printf("Digite o valor do produto..: R$ ");
    // CORRE��O: Usar "%f" para ler um float
    scanf("%f", &valorProd);

    printf("Digite a porcentagem de desconto (ex: 20).. ");
    scanf("%f", &desconto);

    // CORRE��O: Aplicar a f�rmula correta para calcular o valor final
    // M�todo r�pido: Valor * (1 - (Percentual / 100))
    // Usamos 100.0 para garantir que a divis�o seja feita com n�meros decimais
    float valorFinal = valorProd * (1.0 - (desconto / 100.0));


    // CORRE��O: Usar "%.2f" no printf para exibir o valor final
    // %f -> indica que vamos imprimir um float
    // .2 -> indica que queremos formatar com 2 casas decimais (ideal para dinheiro)
    printf("\nO valor final com desconto e de R$ %.2f\n", valorFinal);

    return 0;
}
