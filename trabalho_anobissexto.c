#include<stdio.h>
#include <stdbool.h>
#include <locale.h>  // Adicionado para lidar com os acentos no printf
#include <time.h> // Para pegar a data atual automaticamente

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

int DiasDoMes(int mes, int ano){
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
    return 31;
    }

    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        return 30;
    }
    else if(mes == 2){
        if (anoBissexto(ano)){
        return 29;
    }else{
        return 28;
     }
    }
    return 0;

}


int main(){
    time_t t = time(NULL);
    struct tm *data_atual_info = localtime(&t);
    setlocale(LC_ALL, "Portuguese");


    int ano_nasc, mes_nasc, dia_nasc, para;
    int erro_string;
    int ano_atual = data_atual_info->tm_year + 1900;
    int dia_atual = data_atual_info->tm_mday;
    int mes_atual = data_atual_info->tm_mon + 1;

    while(1){
            long long total_dias = 0; // long long para muitos numeros e vai ser nosso contador

            printf("\n_____________DIAS VIVIDOS_____________\n");
            printf("\nData de Hoje: %02d/%02d/%d\n", dia_atual,mes_atual,ano_atual);
            printf("\nSe deseja para o programa digite o numero 0\n.");

            printf("\nDigite o ano de Nascimento ex:(2000) ou 0 para parar o programa \n");
            erro_string = scanf("%d", &ano_nasc);

            if (erro_string != 1 ){
                printf("\nERRO: Ano invalido! \n");
                while (getchar() != '\n');
                continue;
            }
             if (ano_nasc == 0){
                printf("\nVoce digitou o numero zero o program foi finalizado. OBRIGADDO ;)\n");
                break;
            }

            printf("\nDigite o mes de Nascimento ex:(1-12)\n");
            erro_string = scanf("%d", &mes_nasc);


            if (ano_nasc > ano_atual || ano_nasc < 0){
                printf("\nErro ano invalido, valor do ano deve ser entre 1 e %d\n ", ano_atual);
                continue;
            }

            if (erro_string != 1 || mes_nasc < 1 || mes_nasc > 12){
                printf("\nErro digiti um mes válido! entre 1 a 12\n ");
                continue;
            }

            int max_dias_mes = DiasDoMes(mes_nasc, ano_nasc);
            printf("\nDigite o Dia de Nascimento ex:(1-31)\n");
            erro_string = scanf("%d", &dia_nasc);

            if (erro_string != 1) {
            printf("\nERRO: Entrada inválida! Digite apenas NÚMEROS.\n");
            while (getchar() != '\n');
            continue;
            }

            if (dia_nasc < 1 || dia_nasc > max_dias_mes){
                printf("\n Erro digiti um dia valido \n");
                continue;
            }

            //calendario virtual eles começam na data de nascimento
        int ano_loop = ano_nasc;
        int mes_loop = mes_nasc;
        int dia_loop = dia_nasc;

        while (ano_loop != ano_atual || mes_loop != mes_atual || dia_loop != dia_atual) {
            total_dias++;

            dia_loop++;

            //pegando quantos dia tem no mes atual do loop
            int dia_neste_mes = DiasDoMes(mes_loop, ano_loop);

            //verifica se o mes virou
            if (dia_loop > dia_neste_mes){
                //se o mes virou reiniciamos para o dia um
                dia_loop = 1;
                //mes virou avanca para o proximo
                mes_loop++;

                //verifica se o ano virou
                if(mes_loop > 12){
                    //se mes virou o ano reiniciamos para 1
                    mes_loop = 1;

                    // se avancamos para o proximo ano
                    ano_loop++;
                }
            }
        }




        printf("\n--------------------------------------------\n");
        printf("Desde %02d/%02d/%d até %02d/%02d/%d se passaram: \n", dia_nasc, mes_nasc, ano_nasc, dia_atual, mes_atual, ano_atual);
        printf("\n  A quantidade de dia vividos ate hoje. %lld Dias. Esta ficando velho em\n..", total_dias);
        printf("\n________________REINICIANDO_______________\n");
         if (erro_string == 0){
            printf("\nVoce digitou o numero zero o progrma sera finalizado. Obrigado :)\n");
            break;
        }

        }
     return 0;
    }



