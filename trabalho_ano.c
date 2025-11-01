// Funçao ano bissexto e, retorna quantos dias se passou desde quando vc nacseu ate hj.
#include<stdio.h>
#include <stdbool.h>
#include <locale.h>  // Adicionado para lidar com os acentos no printf

bool anoBissexto(int ano){
    if(ano % 400 == 0){
    return true;
    }
    else if(ano % 100 == 0){
    return false;
    }
    else if(ano % 4 ==0){
    return true;
    }
    else{
    return false;
        }

}

int main(){
    int a, b;
    int erro_string;

    while(1){
    printf("\nDigite um ano:.. (OU o numero zero para parar o programa).\n");
    erro_string = scanf("%d", &a);

        if (erro_string !=1){
            printf("\nErro: Entrada de dados invalida Digite somente numeros.\n ");
            while(getchar()!= '\n');//// Isso é crucial. Se a leitura falhou, o "lixo" (ex: "abc\n")continua no buffer de entrada. Precisamos ler e descartar
            continue; // continua com o programa
        }

        if (a ==0){
            printf("\nVoce digitou o numero 0 o programa sera finalizado, obrigado.\n");
            break;// para o programa
        }
        if (a <0){
            printf("\nDigite somente numeros positivos.Tente novamente\n");
            continue;
        }

        b = anoBissexto(a);
        if (b == true){
            printf("\nO Ano digitado %d e Bissexto\n", a);
            }else{
                printf("\nO ano digitado %d não é Bissexto \n Tente novamente\n ", a);
            }
    }


    return 0;
}
