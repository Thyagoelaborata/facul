#include<stdio.h>

/* programa para ler o mes e o ano de nascimento
de uma pessoa e mostrar sua idade*/

int main() {
    int anonasc, mesnacs, anoatual, mesatual;
    anoatual = 2025;
    mesatual = 9; // M�s atual � Setembro

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anonasc);

    printf("Digite o mes do seu nascimento (1 a 12): ");
    scanf("%d", &mesnacs);

    // Primeiro, calcula a idade apenas com base no ano
    int idade = anoatual - anonasc;

    // CORRE��O 2: L�gica ajustada para o anivers�rio
    // Se o m�s atual for MENOR que o m�s de nascimento,
    // a pessoa ainda n�o fez anivers�rio este ano.
    // Portanto, subtra�mos 1 da idade.
    if (mesatual < mesnacs) {
        idade = idade - 1; // Ou simplesmente: idade--;
    }

    // CORRE��O 3: O bloco 'else' n�o � necess�rio aqui.
    // Se a pessoa j� fez anivers�rio (mesatual >= mesnacs),
    // a idade calculada inicialmente j� est� correta e n�o fazemos nada.

    // CORRE��O 4: Imprimir o resultado final apenas UMA vez
    printf("\nSua idade atual e: %d anos\n", idade);

    return 0;
}
