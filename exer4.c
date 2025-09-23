#include<stdio.h>

// Fun��o para troca de vari�veis inteiras
void troca(int *a, int *b){
    int temp = *a; // Armazena o valor apontado por 'a' em uma vari�vel tempor�ria
    *a = *b;       // Atribui o valor apontado por 'b' para o endere�o de 'a'
    *b = temp;     // Atribui o valor armazenado em 'temp' para o endere�o de 'b'
}

int main(){
    int a, b;

    printf("Digite um Numero para troca..: ");
    scanf("%d", &a);

    printf("Digite outro Numero para troca..: ");
    scanf("%d", &b);

    printf("Valores originais: a = %d, b = %d\n", a, b);

    //  1: Chamar a fun��o de troca
    // Passamos os endere�os de 'a' e 'b' para a fun��o
    troca(&a, &b);

    //   2: Imprimir os valores, n�o os endere�os
    printf("Valores trocados:  a = %d, b = %d\n", a, b);

    return 0;
}





